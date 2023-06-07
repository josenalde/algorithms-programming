#include <iostream>
using namespace std;
int main() {
  int grid[1000][1000];
  int S, T;
  cin >> S >> T;
  for (int i = 1; i<=S; i++) {
    for (int j = 1; j<=S; j++) {
      if (i==j) grid[i][j]=1;
      else grid[i][j] = 0;
    }
  }
  int ti, tf;
  for (int i = 0; i < T; i++) {
    cin >> ti >> tf;
    grid[ti][tf] = 1;
    grid[tf][ti] = 1;
  }

  /* 
  //exibir matriz de adjacências
  for (int i = 1; i<=S; i++) {
    for (int j = 1; j<=S; j++) {
      cout << grid[i][j] << "\t";
    }
    cout << endl;
  }*/

  int p, n, ehPasseio=true, somaPasseios=0; // número de sugestoes de passeio
  cin >> p;
  for (int i = 1; i <= p; i++) {
    cin >> n;
    int c[n];
    for (int j = 1; j <= n; j++) {
      cin >> c[j];
      //cout << c[j] << ",";
    }
    for (int j = 1; j < n; j++) {
      if (grid[c[j]][c[j+1]] == 0) {
        ehPasseio = false;
        break; 
      }
      //cout << c[j] << ",";
    }
    if (ehPasseio) somaPasseios += 1;
  }
  cout << somaPasseios;
  return 0;  
}