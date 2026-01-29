//https://codeforces.com/group/Pf5PtyLxbM/contest/666695/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    string s; cin >> s;
    string sorted = s;

    sort(sorted.begin(), sorted.end());

    for(int i=0; i<n; i++) {
        if(sorted[i] != s[i]) {
            for(int j=n-1; j>i; j--) {
                if(sorted[i] == s[j]) {
                    swap(s[j], s[i]);
                    cout << s << endl;
                    return 0;
                }
            }
        }
    }
    cout << s << endl;
    return 0;
}