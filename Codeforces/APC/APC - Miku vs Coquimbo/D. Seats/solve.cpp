//https://codeforces.com/group/mWZlmOaTZR/contest/682677/problem/D
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s;cin>>s;
        int cont = 0;
        int aux = 0;
        for (int i=0; i<s.size(); i++) {
            char actual = s[i];
            // leer numero
            if (actual == '1') {
                cont++;
                aux = 0;
            } else {
                aux++;
            }
            // verificar 0
            if (aux == 2 && i == 1){
                cont++;
                aux = 0;
            } else if (aux == 3) {
                cont++;
                aux = 0;
            } else if (aux == 2 && i == s.size() -1) {
                cont++;
            }
        }
        if (n == 1) {
            cont = 1;
        }
        cout << cont << endl;
    }
 
    return 0;
}