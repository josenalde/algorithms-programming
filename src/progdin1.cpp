#include <iostream>
using namespace std;

int fatorial(int n) {
  if (n == 1) return 1;
  int f = 1;
  for (int i = n; i > 1; i--) f *= i;
  return f;
}

void imprimeVetor(int a[], int s) {
  for (int i = 0; i < s; i++) {
    cout << a[i] << " ";
  }
}

void fibo(int t) {
  int v[t];
  v[0] = 0;
  v[1] = 1;
  if (t > 2) { // assume t1=0, t2=1 FIXOS
    for (int k = 2; k < t; k++) {
      v[k] = v[k-1] + v[k-2]; // dynamic programming
    }    
  }
  imprimeVetor(v, t);
}

int main() {
  int x = 5, y = 10;
  cout << fatorial(x) << endl;
  fibo(x);
}
