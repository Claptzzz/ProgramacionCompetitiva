//https://codeforces.com/group/Pf5PtyLxbM/contest/668427/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin >> n;
    vector<ll> s(n);
    for (ll i = 0; i < n; i++) {
        cin >> s[i];
    }

    ll sum = 0;

    for (ll i = 0; i < n; i++) {
        ll aux = (i + 1) * (n - i);
        sum += s[i] * aux;
    }

    cout << sum << endl;
    return 0;
}