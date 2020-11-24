#include <fstream> // para manipular arquivos
#include <iostream>
#include <iomanip> // para setw, formatacao de espaços (tamanho)
#include <cstdlib> // para exit()
#define LIM 20

using namespace std;

struct Cidade {
    char nome[LIM]; // para gravar binario, não funciona com string
    unsigned int pop;
};

const char *arquivo = "file5.dat"; // global
int main() {  
    Cidade c1, c2;
    
    ofstream fout;
    ifstream fin;
    fin.open(arquivo, ios_base::in | ios_base::binary);
    if (fin.is_open()) { // se arquivo abriu corretamente
        // le os blocos de bytes para cada registro na estrutura
        while (fin.read((char *) &c2, sizeof c2)) {
            cout << setw(12) << "Nome: " << c2.nome << endl;
            cout << setw(12) << "Pop: " << c2.pop << endl;
        }
        fin.close(); 
    }
    // adiciona novo conteúdo no mesmo arquivo
    fout.open(arquivo, ios_base::out | ios_base::app | ios_base::binary); 
    if (!fout.is_open()) {
        cerr << "Erro na abertura de " << arquivo << endl;
        exit(EXIT_FAILURE);
    }
    cout << "Cadastro: (tecle enter para finalizar" << endl;
    cout << "Nome: ";
    cin.get(c1.nome, LIM);
    while (c1.nome[0] != '\0') { // se der enter, é string vazia (SAI)
        cout << "Pop. :";
        cin >> c1.pop;
        fout.write((char *) &c1, sizeof c1);
        setbuf(stdin, NULL); // limpa buffer para evitar que \n seja lido pelo cin.get 
        cout << "Nome: ";
        cin.get(c1.nome, LIM);
    }
    fout.close();  
} 


