// Example program
#include <iostream>
#include <algorithm>
#include <functional>
//using namespace std;
int main() {
  int x[5] = {10,1,5,20,50};
  int maior = std::max(2, 5); //retorna endereço
  int *menor = std::min_element(x, x+5); //retorna endereço
  std::cout << maior << "," << *menor << std::endl; //acessa o conteudo nos endereços
  for (int i : x) {
    std::cout << i << std::endl;
  }
  std::sort(x, x+5);
  for (int i : x) {
    std::cout << i << std::endl;
  }
  sort(x,x+5,std::greater<int>());
  for (int i : x) {
    std::cout << i << std::endl;
  }
}