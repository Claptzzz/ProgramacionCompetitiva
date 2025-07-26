//https://codeforces.com/group/TY5qlgX1RN/contest/625165/problem/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int minL = 0, minR = 0;
        int maxL = 1e9, maxR = 1e9;
        vector<int> ls(n);
        vector<int> rs(n);
        for (int i = 0; i < n; i++) {
            int l, r;
            cin >> l >> r;
            ls[i] = l;
            rs[i] = r;
            if (i == 0) {
                minR = l;
                maxR = r;
            } else {
                if (l <= maxR and r >= minR) {
                    minR = min({r, minR});
                    maxR = max({l, maxR});
                } else {
                    minR = min({r, minR});
                    maxR = min({l, maxR});
                }
            }
        }

        for (int i = n-1; i >= 0; i--) {
            int l, r;
            l = ls[i];
            r = rs[i];
            if (i == n-1) {
                minL = l;
                maxL = r;
            } else {
                if (l <= maxL and r >= minL) {
                    minL = min({r, minL});
                    maxL = max({l, maxL});
                } else {
                    minL = max({r, minL});
                    maxL = max({l, maxL});
                }
            }
        }

        int range = max({minL-maxR, 0});
        cout << range << endl;
    }

    return 0;
}