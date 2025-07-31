//https://codeforces.com/group/TY5qlgX1RN/contest/626381/problem/H

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;cin>>n;
    vector <char> v(n);
    for (int i=0; i<n;i++) {
        cin >> v[i];
    }

    int cantX = 0;
    int cantC = 0;

    for (int i=0; i<n; i++) {
        if (v[i] == 'x') {
            cantX++;
        } else {cantX = 0;}

        if (cantX >= 3) cantC++;
    }
    cout << cantC;

    return 0;
}