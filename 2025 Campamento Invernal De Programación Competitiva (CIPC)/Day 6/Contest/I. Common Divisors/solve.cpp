//https://codeforces.com/group/TY5qlgX1RN/contest/625831/problem/I

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll; 

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int fooctors(ll g) {
    int count = 0;
    ll srg = (ll) sqrtl(g);
    for (ll i = 1; i <= sqrtl(g); ++i) {
        if (g % i == 0) {
            count++;
            if (i != g / i) count++;
        }
    }
    return count;
 
}

int main() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (ll &x : v) cin >> x;
 
    ll g = v[0];
    for (ll i = 1; i < n; ++i) {
        g = gcd(g, v[i]);
        if (g == 1) break;
    }

    cout << (ll) fooctors(g) << endl;
 
    return 0;
}