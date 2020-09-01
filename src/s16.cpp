

#include <iostream>
#include <bitset>
#include <string>

using namespace std;
int main() {
    string s1, s2;
    s1 = "teste";
    s2 = "teste";

    if (s1==s2) cout << "login OK " << endl;
    else cout << "login failed" << endl;
    
    bitset<8> a = 0b00000001, b;
    b = a^a; // ^ XOR, & AND, | OR
    cout << b << endl;
}