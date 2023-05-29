#include <iostream>

using namespace std;

int main() {
  int xi, x, n, m, pm, r;
  cin >> xi >> n;
  pm = xi;
  for (int i = 1; i <= n; i++) {
    cin >> m;
    r = pm - m;
    pm = r + xi;
  }
  cout << pm << endl;
}