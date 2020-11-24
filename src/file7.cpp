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
    fstream finout; // se aplica a fluxos de leitura e escrita
    finout.open(arquivo, ios_base::in | ios_base::out | ios_base::binary);
    int ct = 0; // numero do registro
    if (finout.is_open()) { 
        finout.seekg(0); // vai para inicio do arquivo
        while (finout.read((char *) &c2, sizeof c2)) {
            cout << ct++ << ": " << setw(12) << "Nome: " << c2.nome << endl;
            cout << setw(12) << "Pop: " << c2.pop << endl;
        }
        if (finout.eof()) finout.clear();
        // desabilita set do bit EOF, que eh ativo no fim da leitura.
        // ao usar clear() libera o EOF, para que o arquivo possa continuar
        // a ser manipulado
        else {
            cerr << "Erro na leitura " << endl;
            exit(EXIT_FAILURE);
        }
    } else {
        cerr << "Erro na abertura do arquivo" << endl;
        exit(EXIT_FAILURE);
    }
    cout << "Registro n. para alterar: ";
    long rec;
    cin >> rec;
    setbuf(stdin, NULL); // limpa nova linha
    if (rec < 0 or rec >= ct) {
        cerr << "Registro invalido -- fechando...";
        exit(EXIT_FAILURE);
    }
    streampos local = rec * sizeof c1;
    finout.seekg(local); // pula para o local
    finout.read((char *) &c1, sizeof c1);
    cout << rec << ": " << setw(12) << "Nome: " << c1.nome << endl;
    cout << setw(12) << "Pop: " << c1.pop << endl;
    if (finout.eof()) finout.clear();
    // permite alterar
    cout << "Novo nome: ";
    cin.get(c1.nome, LIM);
    setbuf(stdin, NULL);
    cout << "Nova Pop.: ";
    cin >> c1.pop;
    setbuf(stdin, NULL);
    finout.seekp(local); // retorna ao registro localizado para alterar
    finout.write((char *) &c1, sizeof c1) << flush;
    if (finout.fail()) {
        cerr << "Erro ao escrever no arquivo" << endl;
        exit(EXIT_FAILURE);
    }
    finout.close();
} 


