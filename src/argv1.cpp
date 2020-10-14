#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char *argv[]) {
    // argc is at least 1, the program/file name
    cout << "Argumentos: " << argc-1 << endl; 
    for (int i=1; i < argc; i++) {
        int a = atoi(argv[i]); // or atof
        cout << argv[i] << " : " << endl;
    }
    return 0;
}