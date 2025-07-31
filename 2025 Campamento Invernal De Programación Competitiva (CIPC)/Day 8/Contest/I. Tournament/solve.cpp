//https://codeforces.com/group/TY5qlgX1RN/contest/626280/problem/I

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

        int n,j,k;cin>>n>>j>>k;

        vector<int> a(n);
        rellenar(a);
        j--;
        int buscado = -1;
        int max = -1;

        for (int i=0; i<n;i++) {
            if (i==j) {
                buscado = a[i];
            }
            if (a[i] > max || max == -1) {
                max = a[i];
            }
        }

        if (k == 1) {
            if (buscado == max) {
                cout << "YES" << endl;  
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "YES" << endl;
        }
    }


    return 0;
}