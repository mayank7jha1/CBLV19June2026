#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  // Variable Definition and Direct List Initialisation.
  int x{10};
  // cout << x;
  // cout << " ";

  // cout << x " "; Not allowed :
  // cout<<x," ";Not Allowed;
  // cout << x << " ";

  // cout << x << "\n";
  //  cout << "Mayank is a good boy";

  // int b;
  // // cin >> 90; // You cannot directly store 90 as a constant value through
  // cin. cin >> b; cout << b;

  // Anything inside " " is treated as text and you can display the entire text
  // directly in a single go.
  cout << "Mayank is a boy.";
  cout << "\n"; // Escape Sequence that means it holds a special meaning.
  cout << x;
  return 0;
}
