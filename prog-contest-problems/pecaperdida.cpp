#include <iostream>
#include <vector>
#include <algorithm> // for sort

using namespace std;
// by Prof. Josenalde Oliveira

// int fcomp(const void *n1, const void *n2) { // for qsort or sort (descending)
// 	if (*(int*)n1 > *(int*)n2) return 1;
// 	else return -1;
// }

int main() {

int N;
cin >> N;
vector<int> pieces(N-1); // the equivalent should be int pieces[N-1];

if (N >= 2 && N <= 1000) { // 2 <= N <= 1000
    for (int i = 0; i<N-1; i++) cin >> pieces[i];
    sort(pieces.begin(), pieces.end()); // sort pieces - ascending
    //qsort(pieces, N-1, sizeof(int), fcomp); // 
    for (int i = 1; i<=N-1; i++) {
        if (pieces[i-1] != i) {
		   cout << i; 
		   break;
		}
		else if (i==N-1) cout << N; // the missing piece is the last one
    }
}
return 0;
}
