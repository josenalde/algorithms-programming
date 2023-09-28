#include <iostream>
#include <string>
using namespace std;

typedef unsigned int uint;

struct Aluno {
  string nome;
  double n[3]; //guardar 3 notas
  uint idade;
};

int main() {
  Aluno a[3];
  //ler dados
  double medias[3]; 
  double somas[3] = {0,0,0};
  double maiorMedia = 0;
  int indiceMaiorMedia;
  for (int i = 0; i < 3; i++ ){
    cout << "-----------" << "Aluno " << i+1 << "----------\n";
    setbuf(stdin, NULL);
    cout << "Nome: "; getline(cin, a[i].nome);
    cout << "Idade: "; cin >> a[i].idade;
    //setbuf(stdin, NULL);
    cout << "Suas 3 notas ";
    for (int j = 0; j < 3; j++) {
      setbuf(stdin, NULL);
      cout << "Nota " << j+1 << ": ";
      cin >> a[i].n[j]; //leia nota j do aluno i
      somas[i] += a[i].n[j]; //acumula notas
    }
    // terminei aluno i
    medias[i] = somas[i] / 3;
    cout.precision(2);
    cout << "Media: " << fixed << medias[i] << endl;
    if (medias[i] > maiorMedia) {
      maiorMedia = medias[i];
      indiceMaiorMedia = i;
    }
    cout << "------------------------------\n";
  }
  // terminei de preencher o cadastro e calcular medias
  cout << "Aluno com maior media: " << a[indiceMaiorMedia].nome;
  
}