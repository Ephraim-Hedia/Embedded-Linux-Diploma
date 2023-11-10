#include <iostream>
#include <map>
#include <string>
#include <vector>
class Command {
public:
  Command();
  void ShowCommands(void) const;
  void ExcuteCommand(std::string Command);
  std::vector<std::string> svcName;

private:
  std::map<std::string, const char *> commands_DB;
  std::string findMostMatchingCommand(const std::string &inputWord,
                                      const std::vector<std::string> &database);
  int levenshteinDistance(const std::string &word1, const std::string &word2);
};