#include <iostream>
#include <cstdlib>
#include <random>
#include <ctime> // para time

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    // gerador Marsenne Twister de 32 bits
    std::mt19937 mt(time(0)); // semente variante no tempo
    //distribuição linear de números reais entre 0 e 12
    std::uniform_int_distribution<int> r(0, 10);
    int L = 4, C = 4;
    float A[L][C], s1=0, s2=0, s3=0;
    // toda vez que você precisar de um número, 
    // basta chamar a distribuição desejada para mapear um 
    // número produzido pelo gerador:
    for (int i=0; i < L; i++) {
        for (int j=0; j < C; j++) {
            A[i][j] = r(mt);
            cout << A[i][j] << " ";
            //soma abaixo diagonal principal
            if (i>j) s1 += A[i][j];
            //soma acima principal
            if (i<j) s2 += A[i][j];
            // soma que nao está nem em Dp nem em Ds
            if (!(i==j or i+j==L-1)) s3 += A[i][j];
        }
        cout << endl;
    }

    cout << s1 << " " << s2 << " " << s3;
    
    cout << endl;
    return 0;
}

