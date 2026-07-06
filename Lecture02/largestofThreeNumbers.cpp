#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Largest of Three Number :

int main() {

  int a, b, c;
  cin >> a >> b >> c;

  if ((a > b) && (a > c)) {
    cout << a << endl;
  } else if ((b > a) and (b > c)) {
    cout << b << endl;
  } else {
    cout << c << endl;
  }

  return 0;
}
