#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  // Starting Point :
  int i = 1;

  // Ending Point :
  while (i <= 10) {
    // Task :
    cout << i << " ";

    // Next State :
    i++;
  }

  // You can only be here if the condition in while fails.
  cout << endl << i << endl;

  // Below Loop is also running 10 times.
  //  Starting Point:
  int j = 10;

  // Stopping Point:
  while (j >= 1) {

    // Task :
    cout << j << " ";

    // Next State:
    j--;
  }

  cout << endl << j << endl;

  cout << "-----------------------------" << endl;

  // You don't use this loop for printing counter :
  //  Aap is tarah loop isliye likhte ho ki aap loop ko
  //  k times chalana chahte ho aur koi kaam k times karna hain.
  int k = 5;
  while (k--) {
    cout << k << " ";
  }

  cout << endl;

  cout << "-----------------------------" << endl;

  // int l = 10;
  // while (--l) {
  //   cout << l << " ";
  // }

  cout << endl;

  return 0;
}
