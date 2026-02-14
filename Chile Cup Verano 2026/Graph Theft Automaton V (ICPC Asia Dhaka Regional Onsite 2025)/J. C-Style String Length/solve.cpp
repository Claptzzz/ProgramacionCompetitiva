//https://codeforces.com/group/Pf5PtyLxbM/contest/669742/problem/J

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;

    while(t--) {
        string s;cin>>s;
        int cant = 0;
        bool slashAnt = false;
        for (int i=0; i<s.length(); i++) {
            if (slashAnt){
                if (s[i] == '0') {
                    slashAnt = false;
                    break;
                } else {
                    cant++;
                    slashAnt = false;
                }
            } else {
                if (s[i] == '0') {
                    cant++;
                } else {
                    slashAnt=true;
                }
            }
        }
        if (slashAnt) {
            cout << "INVALID" << endl;
        } else {
            cout << cant << endl;
        }
    }

    return 0;
}