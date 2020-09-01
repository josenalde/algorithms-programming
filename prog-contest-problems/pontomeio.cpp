#include <iostream>
using namespace std;
//by Josenalde Oliveira
int main(){
  int P, i{0};
  cin>>P; // leia(P), onde P é o número de passos
  
  long double L{2}; //se for long long int não é suficiente
  //unsigned long maxLongInt = 18446744073709551615; 
  long double Po;
  /* pelos exemplos da prova, tentemos encontrar um padrão
     Inicial: 4 pontos
     Passo 1: 9 pontos
     Passo 2: 25 pontos
     Passo 3: 81 pontos
     Logo percebemos que a quantidade de pontos é um quadrado
     perfeito, possui raiz quadrada. Esta é uma primeira
     observação.
     Portanto, deve haver um modo de obter, para cada passo,
     um valor baseado no passo anterior, que, elevado ao
     quadrado dê o número de pontos
     4  = 2^2
     9  = 3^2. Seja o valor L inicial igual a 2, observamos que
               2*2 - 1 = 3, que é a raiz do número de pontos do próximo passo
     25 = 5^2, 2*3 - 1 = 5
     81 = 9^2, 2*5 - 1 = 9, logo temos um padrão iterativo
     */

  while (i < P) {
		    L = L*2 - 1; //este (-1) reflete a retirada do ponto do meio a cada passo
		    i++;
  }
  
  Po = L*L;
  cout<<Po;
  /* para P=29, Po = 288.230.377.225.453.569 = 2.88 O(17)
     unsigned long int: 18.446.744.073.709.551.616 = 1.8 O(19)?
     Logo, Po < maxUnsignedLongInt 
     
     para P=30, Po = 1.152.921.506.754.330.625 = 1.15 O(18)
     Logo, cainda cabe no maxLongInt
     
     para P=31, Po = 4.611.686.022.722.355.201 = 4.6 O(18)
     Logo, cainda cabe no maxLongInt

     para P=32, Po = 18.446.744.082.299.486.209?, ou seja,
     maior que maxUnsignedLongInt e da erro numerico
  */
}
