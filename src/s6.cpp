
//josenaldeOliveira@eaj@ufrn
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int x = 0x0F;
	int y = x + 16;
    cout << std::hex << "F+16 (hex) =" << y << std::endl;
    cout << std::dec << "F em dec: "<< x << endl;
    cout << "y em dec: " << y << endl;
    return 0;  
}