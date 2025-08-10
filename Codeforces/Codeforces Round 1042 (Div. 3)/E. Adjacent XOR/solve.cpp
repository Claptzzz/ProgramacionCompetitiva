//https://codeforces.com/contest/2131/problem/E

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

void rellenar(vector<ll>& x) {
    for (int i = 0; i<x.size(); i++) {
        cin >> x[i];
    }
}

bool check(vector<ll>& a, vector<ll>& b, int x) {
    ll aux = a[x] ^ a[x+1];
    if (aux == b[x]) {
        a[x] = aux;
        return true;
    }
    return false;
}

int main() {

    int t;cin>>t;

    while(t--) {

        int n;cin>>n;
        vector<ll> a(n);
        vector<ll> b(n);
        rellenar(a);
        rellenar(b);

        bool aux = true;

        if (a[n-1] != b[n-1]) {
            cout << "NO" << endl;
        } else {
            for (int i=0; i<n-1; i++) {
                if (a[i] != b[i]) {
                    aux = check(a,b, i);
                }
                if (!aux) {
                    cout << "NO" << endl;
                    break;
                }
            }
            if (aux) {
                cout << "YES" << endl;
            }
        }   
    }

    return 0;
}