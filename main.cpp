#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main() {
  vector<int> some = {1, 2, 3, 4, 5};

  cout << some.back();


  for (auto item : some) {
    cout << item;
  }
}