#include <fstream> // Já inclui <iostream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream fin;
    fin.open("file2.txt"); // ifstream fin("file1.txt")
    char ch;
    fin >> ch; // le um caracter do arquivo
    cout << ch << endl;
    char buffer[80];
    fin >> buffer; // le uma palavra (sem espaços)
    cout << buffer;
    fin.getline(buffer, 80); // le uma linha do arquivo
    cout << buffer;
    string linha;
    getline(fin, linha);
    cout << linha;
}
