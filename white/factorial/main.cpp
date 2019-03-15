#include <iostream>
using namespace std;

// Факториал
int main () {
  int n, result = 1;

  cin >> n;

  while (n > 0) {
    result *= n;
    n--;
  }

  cout << result;

  return 0;
}
