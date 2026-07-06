#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Narrowing of Data :
//  Type Casting :

int main() {

  // Numeric Data :
  int x{90};
  float f{98.7};
  double d{100.567};

  // Narrowing of the data usually happens when you are doing
  //  typecasting.
  // TypeCasting : When you are converting one form of a data
  // to another form.
  // 1. Implicit TypeCasting
  // 2. Explicit TypeCasting

  // Explicit Typecasting :
  //  Aap for the current statement typecasting kar rahe hain ya type ko change
  //  kar rahe hain.

  float e{17.789};
  cout << (int)e << endl;
  cout << e << endl;

  int l{90};
  cout << (float)l << endl;

  // Implicit Typecasting:
  int z = e; // Value of e is being copied in z but since z is a integer it can
             // only store upto integer value.

  float m = (int)e;

  // You should always use direct list initialisation because it doesn't allow
  // narrowing of the data when defining a variable.

  // int g{8.9}; // NO this is not allowed as g can only store integers.

  // int h = 8.9;//Implicit TypeCasting
  // This is allowed and h will store the integer part of 8.9 i.e. 8.

  // cout : Also has a precision of 6 significant digits.

  double o{195.9123456789123456};
  cout << o << endl;

  // Rules :
  cout << (18 / 2.3) << endl;
  cout << (18.5 / 3) << endl;

  float p{5.6};
  int q{3};

  cout << p / q << endl;
  cout << q / p << endl;

  int r{7};

  cout << ((float)r / q) << endl;
  cout << (r / (float)q) << endl;
  cout << (r / 3.0) << endl;

  return 0;
}
