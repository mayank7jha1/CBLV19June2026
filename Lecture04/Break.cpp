#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int i = 1;
  while (i <= 10) {
    cout << i << " ";
    if (i == 5) {
      break;
    }
    cout << "I am Inside the Loop " << endl;
    i++;
  }
  cout << endl << "-------------------------------------" << endl;
  cout << "I am Outside the Loop" << endl;
  cout << i << endl;

  return 0;
}
