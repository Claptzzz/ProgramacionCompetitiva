// https://codeforces.com/group/TY5qlgX1RN/contest/624902/problem/A
 
#include <bits/stdc++.h>
using namespace std;
 
vector<int> computeLPS(string &s) {
    int n = s.length();
    vector<int> lps(n, 0);
    int len = 0;
    for (int i = 1; i < n; ++i) {
        while (len > 0 && s[i] != s[len]) {
            len = lps[len - 1];
        }
        if (s[i] == s[len]) {
            len++;
            lps[i] = len;
        }
    }
    return lps;
}
 
int main() {
    string s;
    cin >> s;
    vector<int> lps = computeLPS(s);
    int len = lps.back();
 
    bool f = false;
    for (int i = 0; i < (int) s.size()-1; ++i) {
        if (lps[i] == len) {
            f = true;
            break;
        }
    }
 
    while (!f && len > 0) {
        len = lps[len - 1];
        for (int i = 0; i < (int) s.size()-1; ++i) {
            if (lps[i] == len) {
                f = true;
                break;
            }
        }
    }
    if (f && len > 0) {
        cout << s.substr(0, len) << endl;
    } else {
        cout << "Just a legend" << endl;
    }
    return 0;
}