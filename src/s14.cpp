

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    system("cls");
    char letra;
    cin>>letra;
    bool t = (letra>='a'&&letra<='z');
    //(t)?cout.put('m'):cout.put('M');
    unsigned char i = 65;
    while (i <= 90) {
        //agua represada (loop infinito)
        cout.put(i); cout.put('\t');
        cout.put(i+32); cout.put('\n');
        i++;
    }
    //cout.put(98); exibe 'b'
   //exemplo 2
   int z = (t)?10:20;
   cout << z << endl;
   //int z = (letra=='x')? 10: 20;
   //cout << '\n' << z;
   return 0;
}









