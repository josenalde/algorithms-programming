#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int soma_dp_ds(int **A, int n) {
  int soma_dp = 0, soma_ds = 0, soma;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i==j) soma_dp += A[i][j];
      if (i+j==n-1) soma_ds += A[i][j];
    }
  }
  soma = soma_dp + soma_ds;
  return soma;
}

int main() {
    srand(time(NULL));
    int n; //ordem da matriz
    cin >> n;
    int **M; //vetor de ponteiros
    M = (int**) malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++) {
      M[i] = (int*) malloc(n*sizeof(int)); 
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        M[i][j] = rand() % 20; 
        cout << M[i][j] << "\t";
      }
      cout << "\n";
    }
    cout << soma_dp_ds(M, n);

    //liberar cada linha da matriz e depois o vetor de ponteiros
    for (int i=0; i<n; i++) free(M[i]);
    free(M); 
    cout << "FIM";
    return 0;
}