/* Obi 2010 - Nível 1 - Fase 1 
   Obi 2010 - Level 1 - Stage 1
   Conta de Água
   Water bill
   Resolução: Josenalde B. de Oliveira
   Solved by Josenalde B. de Oliveira
   Data (Date): 16.03.2020 / March, 16 2020
*/

#include <iostream>
using std::cin;
using std::cout;

int main() {
   // Uso do Short economiza memória, pois leitura será apenas até 103. 
   // short type (2 bytes) to reduce memory usage
   short N, conta; 
   cin>>N;

if (N>=0 and N<=10^3) // Restrição (constraint)
{
	if (N>=0 and N<=10) // 1. Faixa (range)
		conta = 7;
	else if (N>=11 and N <= 30) // 2. Faixa (range)
		// check N ranges
		conta = 7 + (N - 10)*1; // Verifica quanto de N está nesta faixa e multiplica pelo fator R$ 1,00
	else if (N>=31 and N <=100) // 3. Faixa (range)
		conta = 27 + (N - 30)*2; // Verifica quanto de N está nesta faixa e multiplica pelo fator R$ 2,00
	else
		conta = 167 + (N - 100)*5; // Verifica quanto de N está nesta faixa e multiplica pelo fator R$ 5,00
	cout<<conta;
}
}
