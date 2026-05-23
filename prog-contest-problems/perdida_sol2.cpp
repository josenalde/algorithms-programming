// Example program
#include <iostream>
//solução com soma dos termos da PA de razão 1, somando os números inputados, e calculando a diferença, a qual será a peça perdida
using std::cout;
using std::cin;
using std::endl;

int main() {
  int N, somaPA, somaNum = 0, num;
  cin >> N;
  somaPA = (N*(1+N)) / 2; // (n*(a1 + an)) / 2
  for (int i = 0; i < N-1; i++) { //ler os N-1 numeros e fazer o somatorio que sempre é menor que somaPA O(n)
    cin >> num;
    somaNum += num;
  }
  cout << (somaPA - somaNum) << endl;
  return 0;
}
/*
resultado teste corretor OBI
Peça Perdida
Resumo da correção
Pontuação	100 / 100
Linguagem	C++17 / g++
Limite de tempo permitido	0,1 s
Limite de memória permitido	64.0 MB
Máximo tempo usado	0,001 s
Máxima memória usada	560.0 KB
*/