//https://codeforces.com/group/TY5qlgX1RN/contest/625831/problem/D

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;

    while (t--) {

        int n;cin>>n;
        string s;
        if (n != 0) {
            cin>>s;
        }
        string name = "Timur";
        int cantR = 0;
        bool aux = false;

        if (n == 5) {
            for (int i=0; i<5;i++) {
                char eval = name[i];
                for (int j=0; j<n; j++) {
                    if (eval == s[j]) {
                        cantR++;
                    }
                }
                if (cantR != 1) {
                    cout << "NO" << endl;
                    aux = false;
                    break;
                } else {
                    cantR = 0;
                    aux = true;
                }
            }
            if (aux) {
                cout << "YES" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}