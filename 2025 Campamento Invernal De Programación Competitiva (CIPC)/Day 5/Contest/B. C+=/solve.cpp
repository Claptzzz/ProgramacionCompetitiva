//https://codeforces.com/group/TY5qlgX1RN/contest/625396/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main() {

    int t;cin>>t;


    while (t--) {

        ll a,b,n;cin>>a>>b>>n;
        ll aux = 0;
        ll mayor = 0;
        ll menor = 0;

        if (a<b) {
            menor = a;
            mayor = b;
        } else {
            menor = b;
            mayor = a;
        }

        while (mayor<=n) {
            menor += mayor;
            aux++;
            if (mayor < menor) {
                ll temp = mayor;
                mayor = menor;
                menor = temp;
            }
        }

        cout << aux << endl;

    }

    return 0;
}