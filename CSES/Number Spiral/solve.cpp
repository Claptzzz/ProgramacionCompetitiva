//https://cses.fi/problemset/task/1071

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main() {

    int t;cin>>t;

    while(t--) {
        ll x,y;cin>>y>>x;

        if(y>x) {
            if (y%2 == 0) cout << ll((y-1)*(y-1) + (2*y) - x) << endl;
            else cout << ll((y-1)*(y-1) + x) << endl;
        } else {
            if (x%2 == 0) cout << ll((x-1)*(x-1) + y) << endl;
            else cout << ll((x-1)*(x-1) + (2*x) - y) << endl;
        }
    }

    return 0;
}