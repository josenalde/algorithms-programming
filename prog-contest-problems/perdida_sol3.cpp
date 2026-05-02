//solução 3 - peça perdida: vetores booleanos marcando as posições
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  int N;
  cin >> N;
  int aux[N], v[N-1];
  for (int i = 0; i < N; i++) aux[i] = 0; //preencher com zeros
  for (int i = 0; i < N-1; i++) { //ler os N-1 numeros
    cin >> v[i];
    aux[v[i]-1] = 1;
  }
  for (int i = 0; i < N; i++) {
    if (aux[i] == 0) {cout << i+1 << endl; break;}
  } 
  return 0;
}