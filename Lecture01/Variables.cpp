#include <iostream>
using namespace std;

int main() {

  // Variable Definition : Data Type Identifier
  // Variable Definition : Creating this variable for the first time.

  // 1. Copy Assignment :
  int a = 10; // Assignment Statement : Because copy is a slow operation. But in
              // modern c++ 17 onwards this line's speed have been increased
              // significantly.

  // Copy List Initialisation: { } : Whenever I want to store a list i will use
  // this operator.
  // Advantage of this over Copy Assignment is : Uniform
  int b = {30};

  // Direct List Initialisation :
  // 1. Speed
  // 2. Uniformity
  // 3. It Avoids the narrowing of the data.
  int c{60};

  // Value/Zero Initialisation :
  // Whenever I want a container/data structure having initial value as zero.
  int d{};

  float g{4.5};
  char ch{'A'}; // Ispar Discussion aur next class me hogi.

  
}

// In  c++ every container can be treated as a data type:

// stl : 1. c  : 1. sequence : vector, sll(fl),dll(l),deque
//               2. container adapter : stack,queue,pq
//               3. Associative Contaiener : map,set,umap,uset,mmap,mmset,ummap,ummset
//               Special container  : pair (Utility me ) and string (string
//               clas)
//  2. functors
//  3. algorithm
//  4. iterators



//sum=100