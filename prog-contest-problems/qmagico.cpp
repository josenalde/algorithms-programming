#include <iostream>
#include <vector>

using namespace std;
int main(int argc, char const *argv[])
{
   unsigned short N;
   //unsigned short N[1000][1000];
   cin >> N;
   //3 ≤ N ≤ 1000
   if (N >= 3 && N <= 1000) {
        unsigned int Q[N][N]; // modificado de short para int
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                //2 ≤ valor de cada célula ≤ 10^9
                cin >> Q[i][j];

   vector<unsigned int> vSl;
   vector<unsigned int> vSc;

   unsigned int sL{0}, sC{0}, sDp{0}, sDs{0};
   // soma diagonais
   for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                // dprincipal
                if (i==j) sDp += Q[i][j];
                // dsecundaria
                if (i + j == N-1) sDs += Q[i][j];
                
                sL += Q[i][j]; // soma todos da mesma linha
                sC += Q[j][i]; // soma todas da mesma coluna
            }
            vSl.push_back(sL); // adiciona soma da linha atual no vetor
            vSc.push_back(sC);
            sL = 0; // soma linha e reseta acumulador
            sC = 0; // soma coluna e reseta acumulador
   }

//    for (int i = 0; i < vSl.size(); i++) {
//        cout << vSl[i] << ", " << vSc[i] << endl;
//    }
   
   bool qMagico = true; // flag assume que eh quadrado magico
   
   for (int i = 1; i < vSl.size(); i++) {
       if (vSl[i] != vSl[i-1]) {
           qMagico = false;
           break;
       }
       if (vSc[i] != vSc[i-1]) {
           qMagico = false;
           break;
       }
   }

   // entra aqui se as somas das linhas e das colunas são iguais, independentes
   if (qMagico) {
      if (sDp == sDs and vSl[0] == vSc[0] and sDp == vSl[0])
         qMagico = true;
      else
         qMagico = false;
   }
   
   if (qMagico) cout << sDp << endl;
   else cout << 0 << endl;

   
   }
   return 0;
}
