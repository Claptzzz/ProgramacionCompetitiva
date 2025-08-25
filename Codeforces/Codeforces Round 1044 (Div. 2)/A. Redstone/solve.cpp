//https://codeforces.com/contest/2133/problem/0

#include <bits/stdc++.h>
using namespace std;

void rellenar(vector<int>& x) {
    for (int i = 0; i<x.size(); i++) {
        cin >> x[i];
    }
}

int main() {

    int t;cin>>t;

    while(t--) {
        int n;cin>>n;
        vector<int> e(n);
        rellenar(e);
        bool aux = true;
        for (int i=1; i<n; i++) {
            if (e[i-1] % e[i] != 0) {
                aux = false;
                break;
            }
        }
        if (aux) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}