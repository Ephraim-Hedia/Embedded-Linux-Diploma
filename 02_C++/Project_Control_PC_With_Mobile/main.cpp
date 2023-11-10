#include "Command/Command.hpp"
#include "Socket/Socket.hpp"
#include <iostream>
#include <iterator>
#include <map>
#include <string>
#include <thread>
#include <tuple>
#include <utility>
Socket PC{};

void threadFunction(void) {
  Command PC_Command;
  SocketERROR ERR;
  while (1) {
    for (auto i : PC_Command.svcName)
      PC.SendData(i);
    ERR = PC.ReceiveData();
    if (ERR == SocketERROR::RECEIVE_ISSUE_ERR |
        ERR == SocketERROR::RECEIVE_DISCONNECT_ERR) {
      std::cout << "Data Receive ERROR" << std::endl;
      break;
    }
    std::string msg2(PC.DataReceived);
    if (PC.SendData("received Message!") == SocketERROR::SEND_ERR) {
      std::cout << "Data Send ERROR" << std::endl;
      break;
    }
    if (PC.SendData("=========================\n") == SocketERROR::SEND_ERR) {
      std::cout << "Data Send ERROR" << std::endl;
      break;
    }
    PC_Command.ExcuteCommand(msg2);
  }
}

int main(int argc, const char **argv) {

  std::cout << "Control Pc With Mobile" << std::endl;

  std::thread thread1(threadFunction);
  thread1.join();

  return 0;
}
