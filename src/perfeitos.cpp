#include <iostream>
using namespace std;
//test if a number is perfect
// Exemplos 6, 28, 496, 8128, 33550336,8589869056,...

int main() {
	long double x; 
	unsigned long long int N, S=0;
    cout << "enter a negative number to exit " << endl;
	do {
		cin >> N;
		if (N>0) {
			for (unsigned long long int i = 1;i<N;i++) {
			    if (N%i==0) S+=i;	
			}
			if (S==N) cout << "S" << endl;
			else cout << "N" << endl;
		}	
		S = 0;	
	} while (N>0);
	return 0;
}



