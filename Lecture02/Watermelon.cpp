#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int w;
  cin >> w;

  if (w == 2) {
    cout << "No" << endl;
    return 0; // It stops your program here only.
  }

  // If I am here then that means line number 12 has not executed.
  if ((w % 2) == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
