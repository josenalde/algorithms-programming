#include <fstream> // Já inclui <iostream>
using namespace std;

int main() {
    ofstream fout; // cria objeto fout para escrita em arquivos
    fout.open("file2.txt", ios_base::app);
    // ou num único comando: ofstream fout("file1.txt")
    // caso o arquivo exista, é substituído, se não existe é criado
    fout << "gravando no fim" << endl << "append";
    fout.close(); // encerra conexão ao arquivo
}
