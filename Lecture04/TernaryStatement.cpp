#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int a, b, c;
  cin >> a >> b >> c;
  (a < b) ? (cout << a << endl) : (cout << b << endl);
  
  int largest = ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
  cout << largest << endl;

  int ans = ((b > a) ? (a + b) : (a + c));
  cout<<ans<<endl;

  return 0;
}
