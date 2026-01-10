//https://codeforces.com/group/Pf5PtyLxbM/contest/662604/problem/G

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    vector<char> a(n);
    char aux;
    for (int i=0; i<n; i++) {
        cin>>aux;
        a[i] = aux;
    }
    int cant = 0;
    char first = a[0];
    for (int i=1; i<n; i++) {
        bool om = false;
        if (a[i] == ')') {
            for (int j=i-1; j>1; j--) {
                if (a[j] == '(') {
                    cant++;
                    if (om) {
                        cant--;
                        om = false;
                    }
                } else {
                    om = true;
                }
            }
        }
    }
    cout << cant << endl;
}