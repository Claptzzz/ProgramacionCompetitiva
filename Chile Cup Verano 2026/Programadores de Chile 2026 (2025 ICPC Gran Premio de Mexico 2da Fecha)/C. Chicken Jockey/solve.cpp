//https://codeforces.com/group/Pf5PtyLxbM/contest/664619/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mod = 998244353;

ll calcular(ll a) {
    ll resultado = (a * (a - 1)) / 2;
    return resultado;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    
    map<ll,ll> a;
    ll aux;
    for (int i=0; i<n; i++) {
        cin>>aux;
        a[aux]++;
    }
    aux = 1;
    for (auto& par : a) {
        if (par.second >= 2) {
            aux += calcular(par.second)%mod;
        }
    }
    cout << aux << endl;
    
}
