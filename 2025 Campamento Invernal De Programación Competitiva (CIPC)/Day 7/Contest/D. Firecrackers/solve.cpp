//https://codeforces.com/group/TY5qlgX1RN/contest/626062/problem/D

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
bool can_explode_f(const vector<ll>& s, ll f, ll time_limit) {
    vector<ll> selected(s.begin(), s.begin() + f);
    sort(selected.begin(), selected.end());
 
    for (ll i = 0; i < f; ++i) {
        if (selected[f-1-i]+i >= time_limit) {
                return false;
            }
    }
    return true;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, m, a, b;
        cin >> n >> m >> a >> b;
        if (a > b) {
            a = n+1-a;
            b = n+1-b;
        }
        ll til_run = abs(b - a);
        ll max_drop = til_run - 1;
 
        vector<ll> s(m);
        for (int i = 0; i < m; ++i) {
            cin >> s[i];
        }
 
        sort(s.begin(), s.end()); 
 
        ll l = 0, r = min(m, max_drop), ans = 0;
 
        while (l <= r) {
            ll mid = (l + r) / 2;
 
            if (can_explode_f(s, mid, b-1)) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}