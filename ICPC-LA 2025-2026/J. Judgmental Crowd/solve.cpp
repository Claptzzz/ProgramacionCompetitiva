//https://codeforces.com/group/8JufKtWW7p/contest/106178/problem/J

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;cin>>s;
    int aux = 0;

    for (int i=0; i<s.length(); i++) {
        if (s[i] == 'b') {
            if (s[i+1] == 'o' && s[i+2] == 'o' && s[i+3] == 'o' && s[i+4] == 'o') {
                aux--;
            } else if (s[i+1] == 'r' && s[i+2] == 'a' && s[i+3] == 'v' && s[i+4] == 'o') {
                aux += 3;
            }
        } else if(s[i] == 'h') {
            if (s[i+1] == 'a') {
                aux++;
            }
        }
    }
    cout << aux << endl;
    return 0;
}