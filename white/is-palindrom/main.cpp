#include <string>
using namespace std;

// Полиндром
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