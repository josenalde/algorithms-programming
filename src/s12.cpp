

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
   system("cls");
   int a = 10, b = 20;
   cout <<"a= "<<a<< " #a: "<<&a<< endl;
   cout <<"b= "<<b<< " #b: "<<&b<< endl;
   printf("#a: %d\n", &a);
   printf("#b: %d\n", &b);
   return 0;
    
}