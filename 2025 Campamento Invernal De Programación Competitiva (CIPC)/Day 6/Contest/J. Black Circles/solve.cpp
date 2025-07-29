//https://codeforces.com/group/TY5qlgX1RN/contest/625831/problem/J

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        vector<pair<ll,ll>> c(n);
 
        for (ll i = 0; i < n; ++i) {
            cin >> c[i].first >> c[i].second;
        }
 
        ll xs, ys, xt, yt;
        cin >> xs >> ys >> xt >> yt;
        bool foo = true;
        ll dis = (xt-xs)*(xt-xs)+(yt-ys)*(yt-ys);
 
        for (ll i = 0; i < n; ++i) {
            if ((ll) (c[i].first-xt)*(c[i].first-xt)+(c[i].second-yt)*(c[i].second-yt) <= dis) {
                cout << "NO" << endl;
                foo = false;
                break;
            }
        }
        if (foo) cout << "YES" << endl;
    }
    return 0;
}