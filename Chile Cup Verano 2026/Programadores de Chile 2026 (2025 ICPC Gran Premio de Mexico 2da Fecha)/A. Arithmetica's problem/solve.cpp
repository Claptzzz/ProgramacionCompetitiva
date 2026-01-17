//https://codeforces.com/group/Pf5PtyLxbM/contest/664619/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int l,r,k;cin>>l>>r>>k;

    int aux = 0;
    for(l; l<=r; l++) {
        if (l%k == 0) aux++;
    }
    
    cout << aux << endl;
}