#include <iostream>
#include <cstdlib>
#include <random>
#include <ctime> // para time
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    // gerador Marsenne Twister de 32 bits
    std::mt19937 mt(time(0)); // semente variante no tempo
    //distribuição linear de números reais entre 0 e 12
    std::uniform_int_distribution<int> r(0, 10);
    int L = 2, C = 2;
    float A[L][C], pDp=1, pDs=1;
    // toda vez que você precisar de um número, 
    // basta chamar a distribuição desejada para mapear um 
    // número produzido pelo gerador:
    for (int i=0; i < L; i++) {
        for (int j=0; j < C; j++) {
            A[i][j] = r(mt);
            cout << A[i][j] << " ";
            //multiplica diagonal principal
            if (i==j) pDp *= A[i][j];
            //multiplica diagonal secundaria
            if (i+j==L-1) pDs *= A[i][j];
        }
        cout << endl;
    }

    float det = pDp - pDs;
    
    cout << det << endl;
    return 0;
}

