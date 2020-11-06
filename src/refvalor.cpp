#include <iostream>
using namespace std;

void trocaValor(int n1, int n2) {
  int aux; // n1 recebe cópia de x e n2 de y
  aux = n2; // variáveis aux, n1 e n2 são locais
  n2 = n1; // o que acontece aqui, fica aqui
  n1 = aux;
  cout << "Dentro da função trocaValor: " << endl;
  cout << "n1 = " << n1 << ", n2 =" << n2 << endl;
}

void trocaRef(int *n1, int *n2) { // recebe endereços
  int aux;
  aux = *n2; // manipula diretamente a variável original
  *n2 = *n1;
  *n1 = aux;
  cout << "Dentro da função trocaRef: " << endl;
  cout << "*n1 = " << *n1 << ", *n2 =" << *n2 << endl;
}

int main() {
  int x = 5, y = 10;
  cout << "Antes troca por valor: " << endl;
  cout << "x = " << x << ", y =" << y << endl;
  trocaValor(x, y); 
  cout << "Depois troca por valor: " << endl;
  cout << "x = " << x << ", y =" << y << endl;
  trocaRef(&x, &y); // passa os endereços de x e y
  cout << "Depois troca por Referência: " << endl;
  cout << "x = " << x << ", y =" << y << endl;
}
