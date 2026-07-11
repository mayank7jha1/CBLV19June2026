#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int x, y;
  cin >> x >> y;

  // Motivation : If User has given me the input of two numbers whose sum is
  // greate than 30 print I win or else print I loose.

  if (true) {
    if (x + y > 30) {
      cout << "I win" << endl;
      return 0;
    }
  }

  cout << "I Loose" << endl;
}
