

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
   system("cls");
   int w=2, v=5, x=1;
   w++; // ++w = 3
   v += w; // v = v + w; // 5+3=8
   x = ++w; // w = w + 1 = 4, x = w, x = 4
   --v; // v-- v = v - 1 = 8 - 1 = 7
   x *= ++w; // w = w + 1 = 5
             // x = x * w, 4 * 5 = 20;
   v -= x++; // v = v - x, 7 - 20 = -13
             // x = x + 1, 20 + 1 = 21
   cout << w << "\t" << v << "\t" << x << endl;
   return 0;
    
}