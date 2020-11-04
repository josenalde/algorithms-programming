#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    unsigned short N; // 0 a 255
    // for (int p = 0; p < 30; p++) {
    //     if (p%2==0) cout << "\t";
    //     else cout << "\xDB";
    // }
    // cout << endl;
    cin >> N;
    
    if (N >= 2 and N < 50) {
        bool A[N][N];
        for (int i=0; i < N; i++) {
            for (int j=0; j < N; j++) {
                if (i+j == N-1) A[i][j] = true;
                //if (i==j) A[i][j] = true;
                else A[i][j] = false;
                // exibe elemento
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

