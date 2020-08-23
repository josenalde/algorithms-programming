

#include <iostream>
#include <cctype> //for isalpha, isdigit, isalnum...
using std::cout;
using std::cin;
using std::endl;

int main() {
    cout.precision(8); // 8 casas apos a virgula (ponto)
    cout << std::fixed;
    char l = 'v'; // teste com '4' para ver o resultado
                 // teste com um ascii, 65 por exemplo
    int x = 5, y = 2;
    if (isalpha(l)) cout << l << " pertence ao alfabeto " << endl;
    else cout << l << " n pertence ao alfabeto " << endl;
    cout << x/y << endl; // divisão inteira
    double z = 204.34567890;
    int zI; // parte inteira de z
    double zF; // parte fracionaria de z
    zI = (int)z; // truncamento na parte inteira
    zF = z - zI;
    cout << "zI: " << zI << " zF: " << zF << endl;
    cout << "zI+zF: " << zI+zF << endl;
}