#include <iostream>
using namespace std;

int main() {

    int retangulo_1[4], retangulo_2[4];
    int j;
    
    //Obtem coordenadas do primeiro retangulo
    //retangulo_1[0] = x0; retangulo_1[1] = y0; retangulo_1[2] = x1; retangulo_1[3] = y1;
    
    for (j=0; j<=3; j++) cin >> retangulo_1[j];
    
    //Obtem coordenadas do segundo retangulo
    //retangulo_2[0] = x0; retangulo_2[1] = y0; retangulo_2[2] = x1; retangulo_2[3] = y1;
    
    for (j=0; j<=3; j++) cin >> retangulo_2[j];
        
    //Restricoes
    
    if ((retangulo_1[0] >= 0) && (retangulo_1[2] > retangulo_1[0]) && (retangulo_1[2] <= 1000000) && (retangulo_1[1] >= 0) && (retangulo_1[3] > retangulo_1[1]) && (retangulo_1[3] <= 1000000))
    {   
       if ((retangulo_2[0] >= 0) && (retangulo_2[2] > retangulo_2[0]) && (retangulo_2[2] <= 1000000) && (retangulo_2[1] >= 0) && (retangulo_2[3] > retangulo_2[1]) && (retangulo_2[3] <= 1000000))     
       {
           if (retangulo_1[1] <= retangulo_2[3] && retangulo_2[0] <= retangulo_1[2]) cout << "1";
           else cout << "0";       
       }
    }
    
return 0;

}
