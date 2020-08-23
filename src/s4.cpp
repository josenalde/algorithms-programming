

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  unsigned char n = 0b1111;
  cout << (int)n << endl;
  cout << std::hex << (int)n << endl;
  int x1 = 20;
  int x2 {20};
  int x3 {}; //zero
  int x4 = {}; // zero
  int x5 = {20};  
  cout << std::dec << x1 << endl; 
   cout << std::dec << x3; 
}