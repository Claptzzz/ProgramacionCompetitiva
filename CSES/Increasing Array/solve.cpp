//https://cses.fi/problemset/task/1094

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

void rellenar(vector<ll>& x) {
    for (int i = 0; i<x.size(); i++) {
        cin >> x[i];
    }
}

ll aumentar(ll a, ll b) {
    ll x = 0;

    while (a<b) {
        a++;
        x++;
    }
    return x;
}

int main() {

    int n;cin>>n;
    vector<ll> a(n);
    rellenar(a);

    ll moves = 0;
    ll aux = 0;

    for (int i=1; i<n; i++) {
        if (a[i] < a[i-1]) {
            aux += aumentar(a[i], a[i-1]);
            moves += aux;
            a[i] += aux;
        }
        aux = 0;
    }
    cout << moves;

    return 0;
}