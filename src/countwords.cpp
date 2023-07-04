#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s3[] = "algoritmos na eaj da ufrn ufrn ufrn ufrn a a a a a com a if22 eaj eaj";
    char s4[] = "eaj";
    char *ps = strstr(s3, s4);
    int soma = 0;
    if (ps != NULL) {
        soma += 1;
        ps += strlen(s4) + 1;
        ps = strstr(ps, s4);
        while (ps != NULL) {
            soma += 1;
            ps = strstr(ps + strlen(s4) + 1, s4);
        }
    }
    cout << soma << endl;
    return 0;
}
