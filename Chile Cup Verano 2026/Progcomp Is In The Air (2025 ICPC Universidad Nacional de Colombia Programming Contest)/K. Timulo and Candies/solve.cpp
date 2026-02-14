//https://codeforces.com/group/Pf5PtyLxbM/contest/672013/problem/K

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    vector<ll> v(n);
    vector<int> c(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    ll max1 = 0;
    int c1 = -1;
    ll max2 = 0;

    for (int i = 0; i < n; i++) {
        ll val = v[i];
        int color = c[i];
        ll prev_best = 0;

        if (color != c1) {
            prev_best = max1;
        } else {
            prev_best = max2;
        }

        ll total = prev_best + val;

        if (total > max1) {
            if (color != c1) {
                max2 = max1;
                max1 = total;
                c1 = color;
            } else {
                max1 = total;
            }
        } else if (total > max2) {
            if (color != c1) {
                max2 = total;
            }
        }
    }
    cout << max1 << endl;
    return 0;
}