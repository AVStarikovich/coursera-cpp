#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int count;
  int average = 0;

  cin >> count;

  vector<int> days;

  for (int i = 0; i < count; i++) {
    int degree;
    cin >> degree;
    average += degree;
    days.push_back(degree);
  }

  average /= count;

  int dayAverageCount = 0;

  for (auto day : days) {
    if (day > average) {
      dayAverageCount++;
    }
  }

  cout << dayAverageCount << endl;

  for (int i = 0; i < days.size(); i++) {
    if (days[i] > average) {
      cout << i << " ";
    }
  }
}