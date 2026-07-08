#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Global Memory;
// Anything defined inside the buffer/global memory can be accessed through the
// file.
int f{190}; // Global Variable.
int x{300};
// No computations are allowed in global memory.
// f += 10;Not Allowed.
// f = 200;Not Allowed.
// f = 10 * 20;Not Allowed.
//
// Can we access global when we have the local variable of the same name?
// Yes.
// You can do so by scope resolution operator :      ::

int main() {

  x = x + 10;
  // x ko dhunda jaayega yaha by default konse x ki baat horahi hain ?
  // aap gloabl x ki baat kar rahe ho.

  int x{10}; // THis is a local variable to main.
  // If I am at line number 23 can i access variable x of line 10 from main?
  // yes, you can.
  cout << x << endl;   // By default we are talking about x of line number 22.
  cout << ::x << endl; // Here we are talking about x of line number 10.

  if (true) {
    ::x = ::x + 10; // Aap yaha par bhi global x me 10 ko add kar rahe ho.
    float x{19.7};
    // This is a local variable to this box from line 19 to line 36.
    x += 10;
    cout << x << endl;

    if (true) {
      int x{100};
      x += 30;
      cout << x << endl;
    } else {
      int x{200};
      cout << x << endl;
    }

    x -= 10;
    cout << x << endl;
  }

  x *= 10;
  cout << x << endl;

  return 0;
}
