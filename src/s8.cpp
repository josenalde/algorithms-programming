

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cmath>

int main() {
   system("cls");
   //tipo float por padrão exibido com 6 casas decimais
   cout.precision(20);
   cout << std::fixed; //notifica precision de que
   // Se um dos operandos for float, resultado float
   float x = 1, y = 3;
   float w = 50;
   float z = x + y/w; // x + (y/w)
   //float z = (x + y) / (w + x);
   cout << x/(float)y;
   
   cout << 5.0/2 << endl;
   cout << 10*4 << endl;
   cout << x/y << endl;
   cout << 10 % 3 << endl; //resto da divisão
   cout << pow(2,3) << endl;

   return 0;
    
}