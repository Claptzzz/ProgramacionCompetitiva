//https://codeforces.com/group/TY5qlgX1RN/contest/625165/problem/D
 
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
 
void rellenar(priority_queue<ll>& x, int n) {
    int aux = 0;
    for (int i = 0; i<n; i++) {
        cin >> aux;
        x.push(aux);
    }
}   
 
int main() {
 
    int t;cin>>t;
 
    while (t>0) {
 
        int n;cin>>n;
        ll h;cin>>h;
        ll cant=0;
        int mayor = 0;
    
        priority_queue<ll> d;
        rellenar(d, n);

        ll mayor1 = d.top();
        d.pop();
        ll mayor2 = d.top();
        ll aux2 = mayor1 + mayor2;
        
        ll nA= h/aux2;

        ll hr = h - ( (nA*mayor1) + (nA*mayor2));
        nA *= 2;

        if (hr>0) {
            hr -= mayor1;   
            nA++;
            if (hr>0) {
                hr -= mayor2;
                nA++;
            } 
        }
        cout << nA << endl;
        t--;

    }

    return 0;
}