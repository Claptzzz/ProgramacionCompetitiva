//https://cses.fi/problemset/task/1617

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll MOD = 1e9 + 7;

ll elevar(ll base, ll n) {
    int i = n-1;
    ll ans = base;
    if (n == 1) return 2;
    while (i--) {
        ans = (ans * 2)%MOD;
    }
    return ans;
}

int main() {

    ll n;cin>>n;

    cout << elevar(2,n) << endl;

    return 0;
}