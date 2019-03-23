#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void MakeWorry(vector<bool>& stack, int value) {
  stack[value] = true;
};

void MakeQuiet(vector<bool>& stack, int value) {
  stack[value] = false;
};

void MakeCome(vector<bool>& stack, int value) {
  for (int i = 0; i < abs(value); i++) {
    if (value < 0) {
      stack.pop_back();
    } else {
      stack.push_back(false);
    }
  }
}

void MakeWorryCount(vector<bool>& stack) {
  int worryCount = 0;

  for (auto item : stack) {
    if (item) {
      worryCount++;
    }
  }

  cout << worryCount << endl;
}


void Make(vector<bool>& stack, string name, int value) {
  if (name == "WORRY") {
    MakeWorry(stack, value);
  } else if (name == "QUIET") {
    MakeQuiet(stack, value);
  } else if (name == "COME") {
    MakeCome(stack, value);
  } else if (name == "WORRY_COUNT") {
    MakeWorryCount(stack);
  }
};

struct dataSource {
  string name;
  int value;
};

int main() {
  vector<bool> stack;
  int taskCount;
  cin >> taskCount;

  for (int i = 0; i < taskCount; i++) {
    string taskName;
    int taskValue = 0;

    cin >> taskName;

    if (taskName != "WORRY_COUNT") {
      cin >> taskValue;
    }

    Make(stack, taskName, taskValue);
  }
}