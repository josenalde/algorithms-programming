// Example program
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
//solução com soma dos termos da PA de razão 1, somando os números inputados, e calculando a diferença, a qual será a peça perdida
using std::cout;
using std::cin;
using std::endl;
using std::vector;

#define debug(args...) printf(args) //cout << args << endl

int main() {
  srand(time(NULL));
  int N;
  cin >> N;
  int aux[N];
  vector<int> v(N);
  for (int i = 0; i < N; i++) {
      aux[i] = 0; //preencher com zeros
      v[i] = rand() % N + 1; //numero aleatorio entre 1 e N sem repetições
      //verifica valores no vetor para evitar itens já existentes
      if (i > 0) {
        for (int j=i-1;j>=0;j--) {
            if (v[i] == v[j]) {
                i = i - 1;
                break;
            }
        }
      }
  }
  
  //debug("Vetor desordenado gerado com elementos de 1 a %d\n", N);
  for (int i : v) {
      cout << i << ",";
  }
  
  //debug("\nSelecionando aleatoriamente o indice do vetor com o item a remover: ");
  int idxToRemove = rand() % N; //numero aleatorio entre 0 e N-1
  int removedItem = v[idxToRemove];
  cout << idxToRemove << ", com o item " << removedItem << ". Removendo o item..." << endl;
  v.erase(v.begin() + idxToRemove);
  
  //exibe vetor após remover elemento (peça)
  //cout << "Vetor depois de remover item perdido: " << endl;
  for (int i : v) {
      cout << i << ",";
  }
  debug("\n");
  for (int i = 0; i < N-1; i++) aux[v[i]-1] = 1;
  for (int i = 0; i < N; i++) {
    if (aux[i] == 0) {
        cout << "Item perdido: " << i+1 
             << (((i+1) == removedItem) ? " :PASSED" : " :FAILED")
             << endl;
        break;
    }
  } 
  return 0;
}