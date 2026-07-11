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

  int flag = 0;

  int i = 2;
  while (i <= p - 1) {

    if ((p % i) == 0) {
      flag = 1;
      break;
      // You are not allowed to use return 0 here.
      // return 0;
    }

    // Can I say here that p is a prime number? No.
    i++;
  }

  // If I am Standing here : I want to know ki main If vale block ke ander gaya
  // and break line
  //  encounter karne ke baad yaha aaya hu ki while ki condition fail hone ke
  //  karan yaha aaya hu agar main break ke karan yaha aaya hu that means
  //  current number p is not prime,but if main yaha condition fail hone ke
  //  karan aaya hu then number is prime.

  if (flag == 1) {
    cout << "Not Prime" << endl;
  } else {
    cout << "Prime" << endl;
  }

  return 0;
}
