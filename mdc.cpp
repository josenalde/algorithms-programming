#include <iostream>
#include <vector>
using namespace std;

unsigned mdc(unsigned n1, unsigned n2) { // Euclides MDC
	unsigned r;
	while (n2!=0) {
		r = n1 % n2;
		n1 = n2;
		n2 = r;
	}
	return n1;
}

int main() {
	unsigned int x, y;
    vector<unsigned int> v = {10,5,26,13,30,22,2,1,36,10};
    //v.reserve(10); if not initialized
	for (unsigned char i=0; i < v.size()-1; i+=2) {
        cout << "mdc(" << v.at(i) << "," << v.at(i+1)<< ") =" << mdc(v.at(i),v.at(i+1)) << "";
        cout << endl;
    }
	return 0;
}
