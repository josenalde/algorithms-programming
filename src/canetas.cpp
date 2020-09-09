#include <iostream>
using std::cout;

int main() {
      //declarar
      float cedula, troco, custoCaneta;
      int nCanetas;
      //ler
      std::cin >> cedula >> troco >> nCanetas;
      //testar
      if (cedula > troco and troco >= 0 and nCanetas>0) {
            // processar-calcular
            custoCaneta = (cedula - troco) / nCanetas;
            // exibir
            std::cout << custoCaneta << std::endl;
      } else {
            // exibir
            cout << "Dados inconsistentes";
      }

      return 0;
}
