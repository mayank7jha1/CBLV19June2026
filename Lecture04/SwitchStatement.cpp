#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  switch (n) {

  case 1:
    cout << "One" << endl;

  case 2:
    cout << "Two" << endl;
    cout << "We are experimenting Here" << endl;
    break;

  case 3:
    cout << "Three" << endl;
    break;

  case 15:
    cout << "Yo" << endl;
    break;

    // Writing Default is not Compulsory.
  default:
    cout << "Any Other Number" << endl;
    break;
  }

  return 0;
}
