#include <iostream>
using namespace std;

// Факториал
int Factorial (int n) {
  int result = 1;

  while (n > 0) {
    result *= n;
    n--;
  }

  return result;
}

int main () {
  int n;

  cin >> n;

  cout << Factorial(n);

  return 0;
}
