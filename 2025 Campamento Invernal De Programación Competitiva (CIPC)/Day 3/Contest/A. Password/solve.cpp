//https://codeforces.com/group/TY5qlgX1RN/contest/624902/problem/A

#include <bits/stdc++.h>
using namespace std;

bool comprobar(string s, int aux, string& c) {
    int cant=0;
    bool b = false;
    for (int i=0; i<s.length(); i++) {
        if (i<aux) {
            c += s[i];
        } else {
            if (c[0] == s[i]) {
                for(int j=0; j<aux; j++) {
                    if (c[j] == s[i]) {
                        b = true;
                    }
                    if (!b) break;
                }
                if(b) {
                    cant++;
                }
            }
        }
    }
    if (cant >= 2) return true;
    return false;
}

int main() {

    string s;cin>>s;

    char f = s[0];
    int aux=0;
    bool b = false;
    bool a = false;

    for(int i=s.length(); i>0; i--) {
        if(s[i] == f) {
            for (int j=0; j<aux;j++) {
                if (s[i-j] == s[j]) {
                    b = true;
                }
                if (!b) break;
            }
            if (b) {
                string c = "";
                a = comprobar(s, aux, c);
                if (a) {
                    cout << c;
                    break;
                }
            }
        }
        aux++;
    }
    if (!a) {
        cout << "Just a legend";
    }

    return 0;
}