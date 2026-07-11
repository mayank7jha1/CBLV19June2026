#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int p;
  cin >> p;

  // Idea : GO to every Number from 2 to p-1 and check if there is any number in
  // the entire range that divides p completely is there is then p is not a
  // prime number and if there isn't then p is a prime number.

  int i = 2;
  while (i <= p - 1) {

    if ((p % i) == 0) {
      cout << "Not Prime" << endl;
      return 0;
    }

    // Can I say here that p is a prime number? No.
    i++;
  }

  // If I am Here then I can say number p was prime.
  cout << "Prime" << endl;

  return 0;
}
