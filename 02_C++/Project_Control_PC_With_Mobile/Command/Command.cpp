#include "Command.hpp"
#include <algorithm>
#include <cctype>
#include <iostream>
#include <limits>
#include <map>
Command::Command() {

  commands_DB["firefox\n"] = "firefox &";
  commands_DB["vscode\n"] = "code";
  commands_DB["calculator\n"] = "gnome-calculator &";
  commands_DB["calendar\n"] = "gnome-calendar &";
  commands_DB["emojis\n"] = "gnome-characters &";
  commands_DB["text_editor\n"] = "gnome-text-editor";
  commands_DB["todo\n"] = "gnome-todo &";
  commands_DB["terminal\n"] = "gnome-terminal";
  commands_DB["ip\n"] =
      "ifconfig | grep 'inet ' | tail -n 1 | awk '{print $2}'";
  commands_DB["exit\n"] = "exit";

  // Copy Services Names to svcName Vector DB
  for (auto i : commands_DB)
    svcName.push_back(i.first);
}
void Command::ShowCommands(void) const {
  for (auto i : svcName)
    std::cout << i << "\n";
}

void Command::ExcuteCommand(std::string Command) {
  transform(Command.begin(), Command.end(), Command.begin(), ::tolower);
  std::string MostMatchingCommand = findMostMatchingCommand(Command, svcName);
  std::cout << MostMatchingCommand << std::endl;
  system(commands_DB[MostMatchingCommand]);
}

std::string
Command::findMostMatchingCommand(const std::string &inputWord,
                                 const std::vector<std::string> &database) {

  int minDistance = std::numeric_limits<int>::max();
  std::string mostMatchingWord;

  for (const auto &word : database) {
    int distance = levenshteinDistance(inputWord, word);
    if (distance < minDistance) {
      minDistance = distance;
      mostMatchingWord = word;
    }
  }

  return mostMatchingWord;
}
int Command::levenshteinDistance(const std::string &word1,
                                 const std::string &word2) {

  int m = word1.length();
  int n = word2.length();

  // Create a 2D table to store the distances
  std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1, 0));

  // Initialize the table
  for (int i = 0; i <= m; i++) {
    for (int j = 0; j <= n; j++) {
      if (i == 0) {
        dp[i][j] = j;
      } else if (j == 0) {
        dp[i][j] = i;
      } else if (word1[i - 1] == word2[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1];
      } else {
        dp[i][j] = 1 + std::min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
      }
    }
  }

  return dp[m][n];
}