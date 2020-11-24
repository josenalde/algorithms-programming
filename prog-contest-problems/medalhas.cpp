#include <iostream>
#include <algorithm> // para sort()
#include <vector>
using namespace std;

// por Prof. Josenalde Oliveira

struct Atleta {
    int id;
    int tempo;
};

bool fcomp(Atleta x, Atleta y) {
    return (x.tempo < y.tempo); // compara tempos dos atletas para ordenar crescente
}

int main() {
    vector<Atleta> a(3);
    for (int i = 0; i < 3; i++) { // depois pode ficar generico
        cin >> a[i].tempo;
        a[i].id = i+1; // o id do atleta eh a sequencia 1, 2, 3, ...
    }
    
    sort(a.begin(), a.end(), fcomp); // ordena crescente com base nos tempos
    for (int i = 0; i < a.size(); i++) {
        cout << a[i].id << endl; // exibe IDs de cada atleta na ordem primeiro, segundo e terceiro
    }    
}