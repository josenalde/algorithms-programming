

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
   system("cls");
   bool x, y, t;
   auto z = 10.4;
   auto l = 'x';
   x = true; // x = 1
   y = !x; // y = false
   t = (x && y) || !(x || y);
   //if ((x and y) || !(x or y)) cout << "v" << endl;
   if (t) cout << "V" << endl;
   else cout << "F" << endl;

   cout << sizeof(z) << endl; // with a single frac part, double
   cout << sizeof(l) << endl;
   return 0;









   //cout << sizeof (unsigned int) << std::endl;
   //cout << sizeof (short int) << std::endl;
    
}