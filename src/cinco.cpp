#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    unsigned short N;
    bool t = false;
    cin >> N; // quantos digitos tem o numero nao divisivel por 5
    if (N>=2 and N<=1000) { // restricao
        vector<unsigned short> D;
        unsigned short n;
        for (int i = 0; i < N; i++) {
            cin >> n; // le os digitos
            D.push_back(n);
        }     
        for (int i = 0; i < D.size()-1; i++) {
            if (D[i] % 5 == 0 and D[i] < D.back()) {
                swap(D.at(i), D.back());
                t = true;
                break; // sai do laco
            }
        }
        if (!t) { // se ainda não trocou para aumentar, pode-se 
                      // ter um divisível menor, mas é solução
           for (int i = D.size()-2; i >= 0; i--) {
               if (D[i] % 5 == 0) {
                      swap(D.at(i), D.back());
                      t = true;
               }
           }
        }
        
        if (t) {
           for (int i = 0; i < D.size(); i++) 
               cout << D[i] << " ";
        }
        else cout << "-1";
    }
}