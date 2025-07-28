//https://codeforces.com/contest/2128/problem/0

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

void aumentar(vector<ll>& x) {
    for (int i=0; i<x.size(); i++) {
        x[i] *= 2;
    }
}

void rellenar(vector<ll>& x) {
    for (int i = 0; i<x.size(); i++) {
        cin >> x[i];
    }
}

int main() {

    int t;cin>>t;

    while (t--) {

        int n; cin>>n;
        ll c; cin>>c;
        int aux = 0;
        int cantM=0;

        vector<ll> array(n);
        rellenar(array);
        sort(array.begin(), array.end());

        for (int i=n-1; i>=0; i--) {
            if (array[i] == c) {
                array[i] = 0;
                aumentar(array);
            } else if(array[i] < c) {
                array[i] = 0;
                aumentar(array);
            } else {
                cantM++;
            }
        }
        

        cout <<cantM << endl;

    }

    return 0;
}