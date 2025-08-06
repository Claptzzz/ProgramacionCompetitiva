//https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;cin>>s;

    char aux = 's';
    char ant = 's';
    int r = 1;
    int mayor = -1;

    for (int i = 0; i<s.length(); i++) {
        aux = s[i];
        if (i == 0) {
            ant = aux;
        } else {
            if (ant == aux) {
                r++;
            } else {
                ant = aux;
                r = 1;
            }
        }
        if (mayor < r || mayor == -1) {
            mayor = r;
        }
    }

    cout << mayor;

    return 0;
}