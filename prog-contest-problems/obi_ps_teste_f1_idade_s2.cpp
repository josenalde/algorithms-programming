#include <iostream>
#include <cstdlib>

using namespace std;

int cmpfunc (const void * a, const void * b) {
   return - ( *(int*)a - *(int*)b ); //sinal - para DECRESCENTE
}

int main() {
  int i[3];
  cin >> i[0] >> i[1] >> i[2];
  qsort(i, 3, sizeof(int), cmpfunc);
  cout << i[0] << " " << i[1] << " " << i[2];  
  cout << i[1] << endl;
}