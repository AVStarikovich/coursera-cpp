#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPolyndrom(string word) {
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

vector<string> polyndromFilter(
  vector<string> words,
  int minLength
) {
  vector<string> result;

  for (auto word : words) {
    if (isPolyndrom(word) && word.size() >= minLength) {
      result.push_back(word);
    }
  }

  return result;
}

int main () {
  bool some = true;

  vector<string> words = {"abacaba", "aba"};
  int minLength = 5;
  vector<string> expected = {"abacabs"};

  // vector<string> words = {"abacaba", "aba"};
  // int minLength = 2;
  // vector<string> expected = {"abacaba", "aba"};

  // vector<string> words = {"weew", "bro", "code"};
  // int minLength = 4;
  // vector<string> expected = {"weew"};

  vector<string> result = polyndromFilter(words, minLength);

  for (int i = 0; i < result.size(); i++) {
    if (result[i] != expected[i]) {
      some = false;
    }
  }

  cout << (some ? "success" : "fail");

  return 0;
}
