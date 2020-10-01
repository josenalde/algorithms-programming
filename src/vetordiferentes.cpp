#include <iostream>

//by Prof. Josenalde Oliveira, 01.10.2020

int main() {
  int i{0}, N;
  bool flag = false;
  std::cin>>N;
  //std::cout << "Digite " << N << " num. reais :";
  float v[N], s{0};
  for (i=0; i<N; i++) {
    std::cin >> v[i];
    if (i > 0) { //já leu o primeiro
      for (int j=i-1; j>=0; j--) {
        if (v[i]==v[j]) {
          std::cout << "Descobri igual: " << v[i] << "na pos = " << j+1 << "\nDigite de novo." << std::endl;
          flag = true;
          i -= 1; //retrocede o i uma casa
          break;
        }
      }
    }
    
    if (!flag) {
      s += v[i]; //soma apenas diferentes
      std::cout << "..........................." << std::endl;
      std::cout << i+1 << " elementos diferentes no vetor" <<std::endl;
      std::cout.put('[');
      for (int k=0;k<i+1;k++) std::cout<<v[k]<<",";
      std::cout.put(']');
      std::cout.put('\n');
      std::cout << "..........................." << std::endl;
    }
    flag = false;
  }

  for (i=0; i<N;i++) std::cout << v[i] << std::endl;
  std::cout << "Soma :" << s;
  
}
