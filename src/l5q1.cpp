#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    int M[3][3] = {{3,5,9},{2,10,-1},{5,90,1}};
    int *pM;
    pM = &M[0][0];
    int maior = *(pM);
    int menor = maior;

    for (int i=0;i<3*3;i++) {
        if (*(pM+i) > maior) maior = *(pM+i);
        if (*(pM+i) < menor) menor = *(pM+i);
        cout << "#: " << pM+i << " " << *(pM+i) << endl;
    }
    
    cout << "maior: " << maior << endl;
    cout << "menor: " << menor << endl;
    return 0;
}

