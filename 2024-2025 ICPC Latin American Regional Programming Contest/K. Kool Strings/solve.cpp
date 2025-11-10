//https://codeforces.com/gym/105505/problem/K

#include <bits/stdc++.h>
using namespace std;

int main() {

    int k;cin>>k;
    string s;cin>>s;

    k--;
    int aux = 0;
    bool primer = true;
    char ant;
    int cantMov = 0;

    for (int i=0; i<s.length(); i++) {
        if (primer) {
            ant = s[i];
            aux++;
            primer = !primer;
        } else {
            if (ant == s[i]) {
                if (aux >= k) {
                    if (s[i] == '1') {
                        s[i] = '0';
                        cantMov++;
                        ant = s[i];
                    } else {
                        s[i] = '1';
                        cantMov++;
                        ant = s[i];
                    }
                } else {
                    aux++;
                    ant = s[i];
                }
            } else {
                aux = 1;
                ant = s[i];
            }
        }
    }
    cout << cantMov << " " << s;
    return 0;
}