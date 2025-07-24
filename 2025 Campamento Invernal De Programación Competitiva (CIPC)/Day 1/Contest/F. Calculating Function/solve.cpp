//https://codeforces.com/group/TY5qlgX1RN/contest/624447/problem/F

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long x;cin>>x;
    long long aux;

    if (x%2==0) {
        aux = x/2;
    } else {
        aux = (x/2) + 1;
        aux = aux*-1;
    }

    cout << aux;

    return 0;
}