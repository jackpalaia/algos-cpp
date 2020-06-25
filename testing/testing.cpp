#include <iostream>

using namespace std;

int main() {
  string s;
  for (int i = 0; i < 1000; i++) {
    s += "a";
  }
  cout << s;
}