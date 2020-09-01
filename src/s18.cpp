

#include <iostream>
#include <ctime>
#include <cstdlib>

#define MIN (1.50f)
#define MAX (4.50f)

int comp(const void *, const void *);
void ordenaDec(double [], unsigned int);
using namespace std;

int main() {
    srand(time(NULL));
    clock_t start_t, end_t;
    unsigned int sV = 1e3;
    double x[sV];
    for (int i = 0; i < sV; i++) {
        x[i] = MIN + (rand() / (RAND_MAX / (MAX-MIN)));
    }
    start_t = clock();
    // switch these two lines below to compare sorting times
    //qsort(x, sV, sizeof(double), comp); //quick sort
    ordenaDec(x, sV); //insertion sort (based on exchange)
    end_t = clock();
    double total_t = (double)(end_t-start_t)/(double)CLOCKS_PER_SEC;


    cout.precision(14);
    cout << std::fixed << "Execution time CPU: " << total_t;
    return 0;
}

int comp(const void *n1, const void *n2) {
    return ( *(double*)n1 - *(double*)n2 );
}

void ordenaDec(double v[], unsigned int tam) {
    double aux;
    for (int i=0;i<tam-1;i++) {
        if (v[i]<v[i+1]) {
            aux = v[i];
            v[i] = v[i+1];
            v[i+1] = aux;
            i = -1; // forced reset
        }
    }
}