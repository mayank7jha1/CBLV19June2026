#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// const int l{9000};
// No semicolon will be there for macros.
#define Zombie "Mayank is a Good boy."

#define l 400
// This is defined in precomputation phase and hence l will have a value
// 400.

// const int l{300}; // This will throw an error.

#define PI 3.14
// Agar aapne koi keyword/ word macro kiya hain toh uski value throughout
// the program aap change nahi kar sakte.

const int x{300}; // This is different scope: Buffer/Global memory.

int main() {

  // x = x + 10; // Not Allowed because here we are taking about x of line 6
  // which is constant.
  cout << x << endl;
  cout << Zombie << endl;

  cout << PI << endl;

  // const int x; // Not Allowed : Initial value is a must.
  const int x{
      100}; // This x will have a constant value in the local scope of main.

  // x = x + 10;Not Allowed.
  cout << ::x << endl;

  if (true) {
    // int PI;//Not allowed.
    // PI = 100;Not Allowed.
    int x{200}; // Yes, this is allowed.
    x += 10;    // This is allowed because here we are taking about x of line
                // number 15 which is not constant.
  }

  // x += 10;Not allowed because here we again are taking about x of line 9
  // which is constant variable and its value cannot be changed.

  return 0;
}
