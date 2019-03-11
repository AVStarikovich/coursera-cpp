#include <iostream>
#include <vector>
using namespace std;

// Двоичные числа
int main () {
  int n;
  vector<int> some;

  cout << 11 % 2;

  cin >> n;

  while (n != 1) {
    if (n % 2 == 0) {
      some.push_back(0);
    } else {
      some.push_back(1);
    }

    n /= 2;
  }

  some.push_back(1);

  for (int i = some.size() - 1; i >= 0; i--) {
    cout << some[i];
  }

  return 0;
}
