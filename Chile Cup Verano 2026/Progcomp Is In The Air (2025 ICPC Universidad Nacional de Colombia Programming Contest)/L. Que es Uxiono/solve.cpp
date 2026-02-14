//https://codeforces.com/group/Pf5PtyLxbM/contest/672013/problem/L

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    int t;cin>>t;

    while(t--) {
        int n;cin>>n;
        ll a = 1;
        ll add = 1;
        for(int i=1; i<=n; i++) {
            if(i%2==0) {
                add *= 2;
                a += add;
            } else {
                a += add;
            }
        }
        cout << a << endl;
    }

    return 0;
}