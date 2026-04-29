// Example program
#include <iostream>
#include <algorithm> //para sort
//solução com ordenação e vetores
using std::cout;
using std::cin;
using std::sort;
using std::endl;

int main() {
  int N;
  bool found = false;
  cin >> N;
  int p[N-1];
  for (int i = 0; i < N-1; i++) cin >> p[i]; //O(n)
  sort(p,p+N-1); // O(nlog(n))
  
  for (int i = 0; i < N-1; i++) { //O(n)
    if (p[i] != i+1) {
        cout << i+1 << endl; //achou a peça perdida
        found = true;
        break;
    }
  }
  if (!found) cout << N << endl;
  return 0;
}

/* teste no sistema corretor da OBI em 29.04.2026
Peça Perdida
Resumo da correção
Pontuação	100 / 100
Linguagem	C++17 / g++
Limite de tempo permitido	0,1 s
Limite de memória permitido	64.0 MB
Máximo tempo usado	0,002 s
Máxima memória usada	552.0 KB
*/