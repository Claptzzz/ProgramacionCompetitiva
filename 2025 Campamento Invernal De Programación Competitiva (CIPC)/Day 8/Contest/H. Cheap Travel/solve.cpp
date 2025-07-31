//https://codeforces.com/group/TY5qlgX1RN/contest/626280/problem/H

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,m,a,b;cin>>n>>m>>a>>b;
    
    int pA = n*a;
    int pM = ((n+m-1)/m)*b;
    int pAM = (n/m)*b + (n%m)*a;
    
    if (pA <= pM && pA <= pAM) {
        cout << pA;
    } else if (pM <= pA && pM <= pAM) {
        cout << pM;
    } else if (pAM <= pA && pAM <= pM) {
        cout << pAM;
    } else {
        cout << pA;
    }
    return 0;
}