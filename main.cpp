#include <iostream>
#include <string>
using namespace std;

// Второе вхождение
int main () {
  string word;
  int index = -2;
  int occurrenceCount = 0;

  cin >> word;

  for (int i = 0; i < word.size(); i++) {
    if (word[i] == 'f') {
      occurrenceCount++;

      index = -1;

      if (occurrenceCount == 2) {
        index = i;
        break;
      }
    }
  }

  cout << index;

  return 0;
}
