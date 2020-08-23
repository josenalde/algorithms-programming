

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    system("cls");
    int x = 2, y, z;
    cout << " valor x: " << x << endl;
    cout << " #x (HEX): " << std::hex << &x << //
            " #y (HEX): " << std::hex << &y << //
            " #z (HEX): " << std::hex << &z << endl;
    cout << " #w (HEX): " << std::hex << &w << endl;        
    return 0;  
}