#include <iostream>
#include <vector>
#include <map> //para map
#include <algorithm> //para count
using std::cout;
using std::endl;
using std::vector;
using std::map;
//by Josenalde Oliveira - C++ developer
int main() {
    vector<int> v = {1,5,1,1,1,3,3,9,0,2,5,2,9,9,8,7,4,3,7}; //teste 1
    //vector<int> v = {0,1}; // teste 2
    //esperado 0:1, 1:2, 2:2, 3:2, 4:1, 5:2, 7:1, 8:1, 9:2
    //1. verificar cada item do vetor, quantas vezes aparece
    //solução 1 - count com map: nao permite chaves repetidas
    //            se encontrar mesma chave, guarda apenas a primeira
    map<int,int> dictCounts; //estrutura de dados
    for (int i : v) {
        dictCounts[i] = count(v.begin(), v.end(), i);
        // equivalente a:
        //dictCounts.insert({i,count(v.begin(),v.end(),i)});
    }
    cout << "Adicionei " << dictCounts.size() << " chaves ao mapa\n";
    cout << "-----------Com mapa e count--------------\n";
    // a iteração no mapa é ordenada crescente por valor de chave
    for (auto i : dictCounts) { //usar auto para pegar automaticamente os tipos de chave:valor
        cout << " Item: " << i.first << ":" << i.second << endl;
    }
    cout << "-----------Com ordenação e matriz-------------------\n";
    // solução 2: com ordenação e matrizes
    sort(v.begin(), v.end());
    //DEBUG
    /*cout << "-------ordenado--------\n";
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << ",";
    }*/
    cout << "\n";
    int DictMatrix[v.size()][2]; //na prática pode ter menos linhas
    int item, lastItem, sumItem = 1, j = 0;
    lastItem= v.at(0); //primeiro item
    for (int i = 1; i < v.size(); i++) {
        item = v.at(i);
        //DEBUG
        //cout << "j=" << j <<", LastItem: " << lastItem << ", Item: " << item << endl;
        if (item == lastItem) {
            sumItem += 1;
        } else {
            DictMatrix[j][0] = lastItem;
            DictMatrix[j][1] = sumItem;
            j++;
            lastItem = item;
            sumItem = 1;
        }
    }
    // após o laço inclui o último item no j incrementado
    DictMatrix[j][0] = lastItem;
    DictMatrix[j][1] = sumItem;

    for (int i = 0; i <= j; i++) {
        cout << " Item: " << DictMatrix[i][0] << ":" << DictMatrix[i][1] << endl;
    }

    return 0;
}