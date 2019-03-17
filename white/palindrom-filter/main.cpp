#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool IsPalindrom(string word) {
  bool result = true;

  for (int i = 0; i < word.size() / 2; i++) {
    char symbolFromStart = word[i];
    char symbolFromFinish = word[word.size() - 1 - i];

    if (symbolFromStart != symbolFromFinish) {
      result = false;
      break;
    }
  }

  return result;
}

vector<string> PalindromFilter(
  vector<string> words,
  int minLength
) {
  vector<string> result;

  for (auto word : words) {
    if (IsPalindrom(word) && word.size() >= minLength) {
      result.push_back(word);
    }
  }

  return result;
}
