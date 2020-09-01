

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool fcomp(int n1, int n2) { 
	return (n1 > n2); //down
}

int main() {
    
    vector<int> v1; //zero size, empty
    int n;
    cin >> n;
    vector<double> v2(n); //dynamic n size
    cout<<"Array values: \n";
    for (int i=0;i<n;i++) {
        cin>>v2[i];
    }
    
    cout.put('\n');

    for (int i=0;i<n;i++) {
        cout<<v2[i]<<'\t';
    }
    sort(v2.begin(), v2.end()); //up
    
    cout.put('\n');

    for (int i=0;i<n;i++) {
        cout<<v2[i]<<'\t';
    }
    
    cout<<'\n'; // cout << endl;
    
    sort(v2.begin(), v2.end(), fcomp); //down
    for (int i=0;i<n;i++) {
        cout<<v2[i]<<'\t';
    }
    cout << "\n\nEND" << endl;
}