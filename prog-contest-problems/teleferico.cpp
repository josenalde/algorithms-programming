// Teleferico OBI - by Prof. Josenalde Oliveira
#include <iostream>
using std::cin;
using std::cout;

int main() {
    unsigned short int C; // capacity
    unsigned short int A; // students
    unsigned short int nTrips;

    /* OBI tests: 10 20, 3
                  12 55, 5
                  100 87, 1
    */

    cin >> C >> A;

    if ((C >= 2 && C <= 100) && (A >= 1 && A <= 1000)) {
        if (A >= C) {
        if (A  % (C-1) != 0)
            nTrips = (A / (C-1)) + 1;
        else
            nTrips = A / (C-1);
        } else {
               nTrips = 1;
        }
    }
    cout << nTrips;
    return 0;
}
