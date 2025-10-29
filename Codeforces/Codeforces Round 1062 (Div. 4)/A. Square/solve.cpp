//https://codeforces.com/contest/2167/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;

    while (t--) {
        int a,b,c,d;cin>>a>>b>>c>>d;
        if (a==b && c==d && b==c) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}