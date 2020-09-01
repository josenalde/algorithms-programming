#include <iostream>

int main() {
    // configure real values (configurar valores reais)
    std::cout.precision(2);
    //D, L, T, C, line comment
    /* block comment */ 
    int N, Z; //N: pen, Z: cash, Y: change
    float Y; // float is used for real numbers
    float custoCaneta;
    // READ and WRITE
    std::cout << "N: ";
    std::cin >> N;
    std::cout << "Z: ";
    std::cin >> Z;
    std::cout << "Y: ";
    std::cin >> Y;
    // TEST
    if (Z>0 and N>0 and Z>Y and Y>=0) {
        custoCaneta = (Z-Y)/N;
        std::cout << std::fixed;
        std::cout << "Custo da Caneta:" << custoCaneta;
    } else std::cout << "Algum valor invalido";
} 