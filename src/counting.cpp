#include <iostream>
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    //com Array
    int arr[] = { 3, 2, 1, 3, 3, 5, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Contagem para o 3 : "
         << count(arr, arr + n, 3);

    //com <vector>
    vector<int> v{ 3, 2, 1, 3, 3, 5, 3 };
    cout << "\nContagem para o 3 : "
         << count(v.begin(), v.end(), 3);
  
    return 0;
}