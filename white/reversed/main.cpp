#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> Reversed(const vector<int>& array) {
  vector<int> result;

  for (int i = array.size() - 1; i >= 0; i--) {
    result.push_back(array[i]);
  }

  return result;
}
