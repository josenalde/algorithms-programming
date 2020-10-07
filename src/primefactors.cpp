#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

// prime factors - by Prof. Josenalde 14,15.08.2019

bool isPrime(unsigned int x) {
	bool flag = true;
	int i = 2;
	while (i <= x) {
		if (x % i == 0 && i != x) {
				flag = false;
				break;
		}
		i++;
	}
	return flag;
}

int main() {
	int N, fator, cPrimo=0, flagD = 0;
	do {
	// exits for negative values
	inicio: //a goto application
	cout << "\nNumber to decompose: ";
	cin >> N;
	if (N>0) {
		fator = N;
		//test if N is prime or prime*prime, avoid needless time consumption
		if (isPrime(fator)) {
			cout << fator << "(" << 1 << ")";
			goto inicio;
		} else if (fator>100 && fator<999 && isPrime((int)sqrt(fator))) {
			cout << (int)sqrt(fator) << "(" << 2 << ")";
			goto inicio;
		}
	    // if it reaches here...general case
		int i = 2;
		while (fator != 1) {
			while (fator % i == 0) {
				flagD=1; // changes state to indicate division by i
				cPrimo++; //acc how many divisions by i
				fator /= i; //updates dividend
	    	}
	    	if (flagD) { // if fator was divided by i, outputs the factor and the number of divisions
				cout << i;
				cout << "(" << cPrimo << ")";
			}
			flagD = 0; // reset flag for a new divisor search
	    	cPrimo = 0; // reset counter for new divisor search
			i++; // increment divisor, not necessarilly prime !!!!! (must be improved)
		}
	}
	} while(N>0);
	return 0; // END
}
