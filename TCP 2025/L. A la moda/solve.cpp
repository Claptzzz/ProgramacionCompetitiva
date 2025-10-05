//https://codeforces.com/gym/640342/attachments
//PDF
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main() {

    const ll mod = 1e9 + 7;

    ll n,k;cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n;i++) {
        cin >> a[i];
    }
    while (k!=0) {
        sort(a.begin(), a.end());
        a[0]++;
        k--;
    }
    ll aux = 1;
    for(int i=0; i<n;i++) {
        aux = (aux*a[i])%mod;
    }
    cout << aux << endl;
    return 0;
}