//https://codeforces.com/group/mWZlmOaTZR/contest/687386/problem/C
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
 
    ll n,k;cin>>n>>k;
    vector<ll> a;
 
    for (ll i=1;i<=sqrtl(n);i++){
        if (n%i==0){
            a.push_back(i);
            if (i*i != n) {
                a.push_back(n/i);
            }
        }
    }
    
    sort(a.begin(), a.end());
    if (a.size() >= k) {
        cout << a[k-1] << endl;
        return 0;
    }
    cout << "-1" << endl; 
    return 0;
}