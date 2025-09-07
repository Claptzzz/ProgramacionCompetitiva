//https://codeforces.com/contest/2137/problem/D

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

        vector<int> a(n);
        rellenar(a);
        sort(a.begin(), a.end());
        int aux = 0;
        int last = 0;
        queue<int> b;
        for (int i=0; i<n; i++) {
            int actual = a[i];
            if (i==0) {
                b.push(actual);
                aux += actual;
            } else {
                if (actual != last) {
                    b.push(actual);
                    aux += actual;
                }
            }
            last = actual;
        }
        if (n!=aux) {
            cout << "-1" << endl;
        } else {
            for (int i=0; i<n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }

    }

    return 0;
}