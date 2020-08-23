

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    system("cls");
    float x=0.2, y=3.4, z=1.4, m;
    if (x<y and x<z) {
        m = x; // m = 0.2
        x++; // x = 1.2
        m *= x; // m = m * x, 0.2*1.2=0.24
        ++m; // 1.24
        x += --m; // m = m - 1, m = 0.24
                  // x = x + m, 1.2 + 0.24
                  // x = 1.44
    } else if (y<x and y<z) {
        m = y;
    } else {
        m = z;
    }
   cout << x << endl;
   //int z = (letra=='x')? 10: 20;
   //cout << '\n' << z;
   return 0;
}









