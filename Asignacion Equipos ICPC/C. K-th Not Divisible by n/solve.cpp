//

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main() {

    int t; cin>>t;

    while (t--) {
        ll n,k;cin>>n>>k;
        ll juan = k-1;
        ll pedro = n-1;
        ll aux = juan/pedro;
        aux += k;
        cout << aux << endl;
    }

    return 0;
}