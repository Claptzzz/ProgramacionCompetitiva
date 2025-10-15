//https://codeforces.com/gym/640342/attachments
//PDF
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main() {

    const long long MOD = 1000000007;

    ll n;cin>>n;
    ll juan = 1;
    ll pedro = 2;
    ll chimuelo = 1;
    ll diego;
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    } else if (n == 2) {
        cout << 2 << endl;
        return 0;
    }
    for (int i = 3; i <= n; i++) {
        diego = ((i-chimuelo) * ((pedro + juan) % MOD)) % MOD;
        juan = pedro;
        pedro = diego;
        chimuelo++;
    }

    cout << diego % MOD << endl;

    return 0;
}