#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Reverse(vector<int>& array) {
  int tmp;

  for (int i = 0; i < array.size() / 2; i++) {
    tmp = array[i];
    array[i] = array[array.size() - 1 - i];
    array[array.size() - 1 - i] = tmp;
  };
}

