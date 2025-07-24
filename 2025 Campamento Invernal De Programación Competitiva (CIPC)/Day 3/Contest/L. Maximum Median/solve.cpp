//https://codeforces.com/group/TY5qlgX1RN/contest/624902/problem/L

#include <bits/stdc++.h>
using namespace std;

void rellenar(vector<long long>& x) {
    for (int i = 0; i<x.size(); i++) {
        cin >> x[i];
    }
}

int main() {

    long long n,k;cin>>n>>k;
    
    vector<long long> array(n);
    rellenar(array);
    sort(array.begin(), array.end());

    while (k>0) {
        array[n/2]++;
        sort(array.begin(), array.end());
        k--;
    }
    cout << array[n/2];
    return 0;
}