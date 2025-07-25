//https://codeforces.com/group/TY5qlgX1RN/contest/624902/problem/B
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) { //test cases
        int f[26] = {0};
        int n, c = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            char x;
            cin >> x;
            if (f[x-65] == 0) {
                f[x-65]++;
                c++; c++;
            } else c++;
        }
        cout << c << endl;
    }
    return 0;
}