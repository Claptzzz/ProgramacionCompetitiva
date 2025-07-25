//https://codeforces.com/group/TY5qlgX1RN/contest/624902/problem/C
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) { //test cases
        bool s = true;
        int n;
        cin >> n;
        vector<int> v(n+2);
        v[0] = n+1;
        v[n+1] = n+1;
        for (int i = 1; i < n+1; i++) {
            int x;
            cin >> x;
            v[x] = i;
        }
        for (int i = 1; i <= n; i++) {
            if (v[i] < v[i+1] and v[i] < v[i-1] and v[i] != 1) {
                s = false;
            }
        }
 
        if (s) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}