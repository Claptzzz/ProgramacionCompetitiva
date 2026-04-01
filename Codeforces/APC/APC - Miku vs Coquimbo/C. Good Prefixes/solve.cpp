//https://codeforces.com/group/mWZlmOaTZR/contest/682677/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main() {

    ll t;cin>>t;

    while(t--){
        ll n;cin>>n;
        ll sum =0;
        ll actual;
        ll cont =0;
        ll mayor = 0;
        for(ll i=0; i<n; i++) {
            cin>>actual;
            if (actual > mayor) {
                mayor = actual;
            }
            sum += actual;
            if (mayor==(sum-mayor)) {
                cont++;
            }
        }
        cout << cont << endl;
    }

    return 0;
}