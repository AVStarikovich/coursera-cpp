#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Перемещение строк
void MoveStrings(
  vector<string>& source,
  vector<string>& destination
  ){

  for (auto item : source) {
    destination.push_back(item);
  }

  source.clear();
};

