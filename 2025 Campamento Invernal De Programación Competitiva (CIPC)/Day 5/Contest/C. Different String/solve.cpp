//https://codeforces.com/group/TY5qlgX1RN/contest/625396/problem/C

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;

    while(t--) {

        string s;cin>>s;
        bool aux = false;

        if (s.length() <= 1) {
            cout << "NO" << endl;
        } else {
            char x = s[0];
            for (int i=1; i<s.length(); i++) {
                if (x != s[i]) {
                    char temp = x;
                    s[0] = s[i];
                    s[i] = temp;
                    aux = true;
                    break;
                }
            }
            if (!aux) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
                cout << s << endl;
            }
        }
    }

    return 0;
}