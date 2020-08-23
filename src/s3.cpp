
//josenaldeOliveira@eaj@ufrn

#include <iostream>
using std::cout;
using std::cin;
#include <climits>
#define NMAX 100 //um dos modos de criar constante

int main() {
   system("cls");
   // outro modo de criar constante
   // const int NMAX = 100
   char letra = 'A' + 32; //muda para minusculo
   long long int w;
   long double p;
   float b = 245.326, bFrac;
   int bInt = (int)b;
   bFrac = -(bInt-b);
   cout << "Letra char: " << letra << std::endl;
   cout << "Letra int: " << (int)letra << std::endl;
   cout << "b: " << b << " = ";
   w = 10 + NMAX;
   cout << bInt << "  +  "  << bFrac << std::endl;
   //tipo float por padrão exibido com 6 casas decimais
   cout.precision(2);
   cout << std::fixed; //notifica precision de que
   // se refere a parte fracionária
   cout << "b: " << b << "  bInt: " << bInt \
        << "  +  "  << bFrac << std::endl;
   return 0;

   //cout << sizeof (unsigned int) << std::endl;
   //cout << sizeof (short int) << std::endl;
    
}