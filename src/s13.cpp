

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
   system("cls");
   float y = 3.4, x = 5.2;
   if (y < x) { // 1 se V, 0 se F
       y++;
       x--;
   } else {
       y--;
       x++;
   }
   cout <<"x: "<<x<<"y: "<<y<<endl;
   if (y < x) { 
       y++; x--; }
   else y--;
   cout <<"x: "<<x<<" y: "<<y<<endl;
   return 0;
    
}