//https://codeforces.com/group/Pf5PtyLxbM/contest/668427/problem/K

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while (t--) {
        ll a,b,c,d;cin>>a>>b>>c>>d;
    
        ll inicio = max(a, c);
        ll fin = min(b, d);
        ll distancia = fin-inicio;
    
        cout << (distancia < 0 ? 0 : distancia) << endl;
    }
    return 0;
}