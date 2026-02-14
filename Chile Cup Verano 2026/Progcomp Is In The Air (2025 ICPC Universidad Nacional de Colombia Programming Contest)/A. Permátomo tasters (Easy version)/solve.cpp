//https://codeforces.com/group/Pf5PtyLxbM/contest/672013/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while(t--) {
        ll n,k;cin>>n>>k;
        vector<ll> a(n);
        vector<ll> e;
        for (ll i=0; i<n; i++){
            cin>>a[i];
        }

        for (ll i = 0; i < n; ++i) {
            for (ll j = 0; j < n; ++j) {
                e.push_back(a[i] + a[j]);
            }
        }
        sort(e.begin(), e.end());
        cout << e[k-1] << endl;
    }
    return 0;
}