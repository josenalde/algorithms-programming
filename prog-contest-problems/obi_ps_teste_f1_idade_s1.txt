#include <iostream>
using namespace std;
int main() {
  int i1, i2, i3;
  cin >> i1 >> i2 >> i3;
  if (i1 < i3) {
    int aux;
    aux = i3;
    i3 = i1;
    i1 = aux;
  }
  if (i1 < i2) {
    int aux;
    aux = i2;
    i2 = i1;
    i1 = aux;
  }
  if (i2 < i3) {
    int aux;
    aux = i3;
    i3 = i2;
    i2 = aux;
  }
  cout << i2 << endl;
}