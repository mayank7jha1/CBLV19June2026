#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int i = 1;
  while (i <= 10) {
    cout << i << " ";
    i++;
    if (i == 5) {
      continue;
    }

    cout << "Mayank" << endl;
  }

  return 0;
}
