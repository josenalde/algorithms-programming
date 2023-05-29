#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int cmpfunc (const void * a, const void * b) {
   return - ( *(int*)a - *(int*)b ); //sinal - para DECRESCENTE
}

int main() {
  vector<int> i;
  int i1, i2, i3;
  cin >> i1 >> i2 >> i3;
  i.push_back(i1);
  i.push_back(i2);
  i.push_back(i3);
  sort(i.begin(), i.end());
  cout << i[1] << endl;
}