#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int x{90};

  if (x > 50) {
    cout << "Yoi" << endl;
  } else if (x > 70) {
    cout << "no" << endl;
  } else {
    cout << "Ho" << endl;
  }

  cout << endl << "----------------------" << endl;

  if (x > 50) {
    cout << "Yoi" << endl;
  }

  if (x > 70) {
    cout << "no" << endl;
  }

  if (x > 100) {
    cout << "Ho" << endl;
  } else {
    cout << "Mo" << endl;
  }

  return 0;
}
