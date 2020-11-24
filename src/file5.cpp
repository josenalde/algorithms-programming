#include <fstream> // Já inclui <iostream>
#include <iostream>
#include <string>
#define LIM 20

using namespace std;

struct Cidade {
    char nome[LIM]; // para gravar binario, não funciona com string
    unsigned int pop;
};

int main() {  
    Cidade c1 = {"natal", 884100};
    ofstream fout;
    fout.open("file5.dat", ios_base::out | ios_base::binary); // pode ser ios
    fout.write((char *) &c1, sizeof c1);
    /* grava toda a estrutura como uma unidade, nao pode ser lido como texto
       ocupa menos espaco em disco 
       write() copia determinado numero de bytes da memoria para o arquivo
       sem conversoes. O endereço é o início do bloco de bytes, mas precisa
       ser feito o typecast para ponteiro para char
    */
} 


