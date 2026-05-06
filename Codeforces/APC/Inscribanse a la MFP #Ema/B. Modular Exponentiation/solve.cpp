//https://codeforces.com/group/mWZlmOaTZR/contest/687386/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ll n,m;cin>>n>>m;
    ll p = pow(2,n);
    cout << ll(m%p) << endl;
    return 0;
}