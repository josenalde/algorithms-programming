#include <fstream> // Já inclui <iostream>
using namespace std;

int main() {
    ofstream fout; // cria objeto fout para escrita em arquivos
    fout.open("file1.txt");
    // ou num único comando: ofstream fout("file1.txt")
    // caso o arquivo exista, é substituído, se não existe é criado
    fout << "gravando no arquivo" << endl << "noutra linha";
    fout.close(); // encerra conexão ao arquivo
}
