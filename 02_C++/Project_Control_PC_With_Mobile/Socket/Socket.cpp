#include "Socket.hpp"
#include <arpa/inet.h>
#include <iostream>
#include <netdb.h>
#include <netinet/in.h>
#include <string.h>
#include <string>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

// Constructor
// ======================================================================================
Socket::Socket() {
  do {
    static int NumberOfUser = 0;
    if (Socket::_create() == SocketERROR::CREATE_ERR) {
      std::cout << "SocketERROR Accure" << std::endl;
      break;
    }
    if (Socket::_bind() == SocketERROR::BIND_ERR) {
      std::cout << "BIND_ERROR Accure" << std::endl;
      break;
    }
    if (Socket::_listen() == SocketERROR::LISTEN_ERR) {
      std::cout << "LISTEN_ERROR Accure" << std::endl;
      break;
    }
    if (Socket::_accept() == SocketERROR::ACCEPT_ERR) {
      std::cout << "ACCEPT_ERROR Accure" << std::endl;
      break;
    }
    // Socket::_printClientData();
  } while (0);
}
// ======================================================================================

SocketERROR Socket::_printClientData(void) {
  // Printing Client INFO
  memset(host, 0, NI_MAXHOST);
  memset(svc, 0, NI_MAXSERV);
  int result = getnameinfo((sockaddr *)&client, clientSize, host, NI_MAXHOST,
                           svc, NI_MAXSERV, 0);
  if (result) {
    std::cout << host << " Connected On " << svc << std::endl;
  } else {
    inet_ntop(AF_INET, &client.sin_addr, host, NI_MAXHOST);
    std::cout << host << " Connected on " << ntohs(client.sin_port)
              << std::endl;
  }

  return SocketERROR::NO_ERR;
}
// ======================================================================================

Socket::~Socket() {
  // Close the Socket
  close(listening);
  close(clientSocket);
}
// ======================================================================================

SocketERROR Socket::ReceiveData(void) {
  // Clear the buffer
  memset(DataReceived, 0, 4096);
  // Wait for a message
  int bytesRecv = recv(clientSocket, DataReceived, 4096, 0);

  if (bytesRecv == -1) {
    std::cerr << " There was connection issue" << std::endl;
    return SocketERROR::RECEIVE_ISSUE_ERR;
  }
  if (bytesRecv == 0) {
    std::cout << "The CLient disconnected" << std::endl;
    return SocketERROR::RECEIVE_DISCONNECT_ERR;
  }
  // Display message
  std::cout << "Received :" << std::string(DataReceived, 0, bytesRecv)
            << std::endl;

  return SocketERROR::NO_ERR;
}
// ======================================================================================

SocketERROR Socket::SendData(std::string str) {
  // Resend message
  int BytesSend = send(clientSocket, str.c_str(), str.size(), 0);
  if (BytesSend == 0) {
    return SocketERROR::SEND_ERR;
  }
  return SocketERROR::NO_ERR;
}

// ==================================================================
// Private Methods

SocketERROR Socket::_create() {
  listening = socket(AF_INET, SOCK_STREAM, 0);
  if (listening == -1) {
    return SocketERROR::CREATE_ERR;
  }
  return SocketERROR::NO_ERR;
}
// ======================================================================================

SocketERROR Socket::_bind() {
  // Bind the socket to a IP / port
  // Bound Status
  hint.sin_family = AF_INET;
  hint.sin_port = htons(PORT); // host to network short
  hint.sin_addr.s_addr = INADDR_ANY;

  if (bind(listening, (sockaddr *)&hint, sizeof(hint)) == -1) {
    return SocketERROR::BIND_ERR;
  }
  return SocketERROR::NO_ERR;
}
// ======================================================================================

SocketERROR Socket::_listen() {
  // Listening Status
  // Mark the socket for listening in
  if (listen(listening, SOMAXCONN) == -1) {
    return SocketERROR::LISTEN_ERR;
  }
  std::cout << "Server listening on port " << PORT << std::endl;
  return SocketERROR::NO_ERR;
}
// ======================================================================================

SocketERROR Socket::_accept() {
  // Accept a call
  std::cout << "Waiting For Clients" << std::endl;

  clientSocket = accept(listening, (sockaddr *)&client, &clientSize);
  if (clientSocket == -1) {
    return SocketERROR::ACCEPT_ERR;
  }
  // Close the Listening socket
  std::cout << "Accept Client" << std::endl;

  return SocketERROR::NO_ERR;
}

// ======================================================================================