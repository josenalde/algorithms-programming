#include <fstream> // Já inclui <iostream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string arquivo;
    cout << "Qual o nome do arquivo: ";
    cin >> arquivo;
    ofstream fout(arquivo.c_str()); // converte de string para char * (C)
    fout << "Gravando esta frase no arquivo: " << endl;
    cout << "Digite o valor (escrito na tela) ";
    float n;
    cin >> n;
    fout << "O valor digitado na tela e gravado no arquivo: " << n << endl;
    fout.close();

    // leitura
    ifstream fin(arquivo.c_str());
    cout << "Conteudo do arquivo " << arquivo << ": " << endl;
    char ch;
    while (fin.get(ch)) cout << ch; // lê caractere a caractere
    cout << "Feito " << endl;
    fin.close();
} 


