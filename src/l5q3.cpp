#include <iostream>
#include <cstdlib>
#include <random>
#include <ctime> // para time
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    cout.precision(4);
    cout << fixed;
    vector<float> v;
    system("cls");
    // gerador Marsenne Twister de 32 bits
    std::mt19937 mt(time(0)); // semente variante no tempo
    //distribuição linear de números reais entre 0 e 12
    std::uniform_real_distribution<float> r(0.f, 12.f);
    float B[4][4];
    // toda vez que você precisar de um número, 
    // basta chamar a distribuição desejada para mapear um 
    // número produzido pelo gerador:
    for (int i=0; i < 4; i++) {
        for (int j=0; j < 4; j++) {
            B[i][j] = r(mt);
            //cout << B[i][j] << " ";
            if (B[i][j] > 10) v.push_back(B[i][j]);
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ", ";
    }
    return 0;
}

