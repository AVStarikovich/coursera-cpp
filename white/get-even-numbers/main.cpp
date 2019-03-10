#include <iostream>
using namespace std;

// Чётные числа
int main () {
  int a, b;

  cin >> a >> b;

  if (a % 2 == 0) {
    cout << a++;
  } else if (a != b) {
    cout << ++a;
    a++;
  }

  for (int i = a; i <= b; i++) {
    if (i % 2 == 0) {
      cout << " " << i;
    }
  }

  return 0;
}
