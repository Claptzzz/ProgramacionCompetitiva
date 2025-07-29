//https://codeforces.com/group/TY5qlgX1RN/contest/625831/problem/E

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, k;
        cin >> a >> b >> k;
 
        vector<int> nBoy(k), nGirl(k);
        vector<int> cBoy(a + 1, 0), cGirl(b + 1, 0);
 
        for (int i = 0; i < k; ++i) {
            cin >> nBoy[i];
            cBoy[nBoy[i]]++;
        }
        for (int i = 0; i < k; ++i) {
            cin >> nGirl[i];
            cGirl[nGirl[i]]++;
        }
 
        ll total = 0;
        for (int i = 0; i < k; ++i) {
            total += (ll) (k - cBoy[nBoy[i]] - cGirl[nGirl[i]] + 1);
        }
        cout << total / 2 << endl;
    }
    return 0;
}