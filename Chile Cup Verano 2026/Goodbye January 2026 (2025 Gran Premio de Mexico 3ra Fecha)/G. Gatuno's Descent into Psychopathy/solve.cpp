//https://codeforces.com/group/Pf5PtyLxbM/contest/668427/problem/G

#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while (t--) {
        ll h1,h2,b;cin>>h1>>h2>>b;
        if (h1 <= h2) {
            cout << 0 << "\n";
        } else {
            //comentarios para no perderme
            //despeje de la formula que daban
            //parte de arriba
            // pasa a ser - pq queda logx/logy y se puede cambiar a -
            ld n = log((ld)h2) - log((ld)h1);
            //parte de abajo
            ld d = log((ld)(b - 1)) - log((ld)b);
            //la division
            ld r = n / d;
            //ceil era techo para redondear arriba
            cout << (ll)ceil(r) << "\n";
        }
    }
    return 0;
}