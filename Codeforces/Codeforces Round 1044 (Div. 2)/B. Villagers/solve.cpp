//https://codeforces.com/contest/2133/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

void rellenar(vector<ll>& x) {
    for (int i = 0; i<x.size(); i++) {
        cin >> x[i];
    }
}

int main() {

    int t;cin>>t;

    while(t--) {

        int n; cin>>n;
        vector<ll> x(n);
        rellenar(x);
        sort(x.begin(), x.end());

        ll money = 0;
        ll max = 0;
        ll min = 0;

        for (int i = n-1; i>0; i -= 2) {
            money += x[i];
            min = x[i-1];

            x[i] -= min;
            x[i-1] -= min;

            if (i-2 >= 0 && i-3 <= 0) {
                money += x[i-2];
                break;
            }
        }
        cout << money << endl;
    }

    return 0;
}