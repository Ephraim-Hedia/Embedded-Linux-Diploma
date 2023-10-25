#include <csignal>
#include <iostream>
// HOw to Handle Interrupt Signle

void signalHandler(int signum) {
  std::cout << "Interrupt signal (" << signum << ") received.\n";

  // cleanup and close up stuff here
  // terminate program

  exit(signum);
}

int main() {
  int i = 0;
  // register signal SIGINT and signal handler
  // SIGINT --> Signal Integer which equel to Ctrl + C
  signal(SIGINT, signalHandler);

  while (++i) {
    std::cout << "Going to sleep...." << std::endl;
    if (i == 3) {
      raise(SIGINT); // Raise the Interrupt Signal By Code in the Third Second
    }
    sleep(1);
  }

  return 0;
}