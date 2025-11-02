//https://codeforces.com/gym/105505/problem/F

#include <bits/stdc++.h>
using namespace std;

int main() {

    int k,n; cin>>k>>n;

    difMax = 1+k*2;

    if (n-k < 2) {
        cout << "*";
        return 0;
    } else if (n-k >= difMax) {
        cout << "*";
        return 0;
    } else {
        int guiones = n-k;
        
    }

    return 0;
}