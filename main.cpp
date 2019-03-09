#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {
  string message = "Hello, world!";
  vector<int> some = {1, 3, 4, 5};

  cout << message
       << " "
       << some.size();

  return 0;
}