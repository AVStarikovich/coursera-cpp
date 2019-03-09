#include <iostream>
using namespace std;

// Расчёт стоимости товара
double getPrice(
  double nominalPrice,
  double firstLimit,
  double secondLimit,
  double firstSale,
  double secondSale
  ) {
  double factor = 100;

  if (nominalPrice > secondLimit) {
    factor -= secondSale;
  } else if (nominalPrice > firstLimit) {
    factor -= firstSale;
  }

  return nominalPrice * (factor / 100);
}

int main () {
  double a, b, n, x, y;

  cin >> n >> a >> b >> x >> y;

  if (a < b) {
    cout << getPrice(n, a, b, x, y);
  } else {
    cout << getPrice(n, b, a, y, x);
  }

  return 0;
}
