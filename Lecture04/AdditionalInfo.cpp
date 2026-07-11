#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
// Current Program ke liye int keyword ka matlab ab long long hain.
// By Default your int is of 4 byte.
// Current Program ke ander jitne bhi 4 byte ke int hain unko long long me
// convert kardo.
#define int long long
#define endl '\n'

// Now this int32_t will not be converted to long long.
// long long int is not int :
int32_t main() {

  long long x{100};
  // long long int y{200};Don't write it like this if you have a macros defining
  // the meaning of int.
  long long z{300};
  long long p{900};
  long long l{1200};

  int o{400};

  return 0;
}
