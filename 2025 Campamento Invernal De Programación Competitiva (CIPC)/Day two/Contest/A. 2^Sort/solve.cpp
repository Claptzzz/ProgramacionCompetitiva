//https://codeforces.com/group/TY5qlgX1RN/contest/624645/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a) cin >> x;
 
        vector<int> good(n - 1, 0);
        for (int i = 0; i < n - 1; ++i) {
            if (a[i] < 2 * a[i + 1]) {
                good[i] = 1;
            }
        }
 
        int count = 0, streak = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (good[i]) {
                ++streak;
                if (streak >= k) {
                    ++count;
                }
            } else {
                streak = 0;
            }
        }
 
        cout << count << endl;
    }
    return 0;
}