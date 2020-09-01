#include <iostream>
using std::cin;
using std::cout;

int main() {
  int N, P, Q;
  char C;
  cin >> N >> P >> C >> Q;
  bool tN = 1<=N && N<=500000;//5e5
  bool tP = 0<=P && P<=1000;
  bool tQ = 0<=Q && Q<=1000;
  if (tN and tP and tQ) {
    switch(C) {
      case '+': {
        if (P+Q<=N) cout << "OK";
        else cout << "OVERFLOW";
        //(P+Q<=N)?cout<<"OK":cout<<"OVERFLOW";
        break;
      }
      case '*': {
        if (P*Q<=N) cout << "OK";
        else cout << "OVERFLOW";
        break;
      }
    }
  }
}