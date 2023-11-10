#include <arpa/inet.h>
#include <iostream>
#include <netdb.h>
#include <netinet/in.h>
#include <string.h>
#include <string>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
enum class SocketERROR {
  CREATE_ERR,
  BIND_ERR,
  LISTEN_ERR,
  ACCEPT_ERR,
  SEND_ERR,
  RECEIVE_ISSUE_ERR,
  RECEIVE_DISCONNECT_ERR,

  NO_ERR

};
class Socket {
public:
  Socket();
  ~Socket();
  SocketERROR ReceiveData(void);
  SocketERROR SendData(std::string str);
  int listening;
  int clientSocket;
  char DataReceived[4096];

private:
  const int PORT = 8088;
  const int ACCEPT_IP = INADDR_ANY;
  sockaddr_in client;
  socklen_t clientSize = sizeof(client);
  char host[NI_MAXHOST]; // IP
  char svc[NI_MAXSERV];  // PORT

  sockaddr_in hint;

  // Fucntions
  SocketERROR _create(void);
  SocketERROR _bind(void);
  SocketERROR _listen(void);
  SocketERROR _accept(void);
  SocketERROR _printClientData(void);
};