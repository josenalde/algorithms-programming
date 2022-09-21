#include <iostream>
#include <bits/stdc++.h>
#include <ctime>
#include <cstdlib>
using namespace std;
  
int main()
{
    srand(time(NULL));
    int votos_validos[] = {1,2,3,0,-1};
    vector<vector<int>> votos_apuracao;
    //0: branco, -1: nulo, candidatos: 1, 2, 3
    vector<int> votos_coletados;
    const int TOTAL_VOTOS = 1000;
    for (int i=0; i<TOTAL_VOTOS; i++) {
      votos_coletados.push_back(-1 + (rand() % 5));
      //cout << votos_coletados[i] << '\t';
    }
    for (int i : votos_validos) {
      vector<int> v_to_fill;
      v_to_fill.push_back(i);
      v_to_fill.push_back(count(votos_coletados.begin(), votos_coletados.end(), i));
      votos_apuracao.push_back(v_to_fill);
    }
    int totaliza_votos_urna = 0;
    int maior = votos_apuracao[0][1];
    for (int i = 0; i < votos_apuracao.size(); i++) {
        for (int j = 0; j < votos_apuracao[i].size(); j++) {
            cout << votos_apuracao[i][j] << " ";
            if (j==1) 
              totaliza_votos_urna +=  votos_apuracao[i][j];
              
             }
      cout << endl;
    }
    cout << "Votos coletados: " << TOTAL_VOTOS << endl;
    cout << "Votos contabilizados: " << totaliza_votos_urna << endl;
    
    return 0;
}