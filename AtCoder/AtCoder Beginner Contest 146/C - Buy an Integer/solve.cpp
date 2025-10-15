//https://atcoder.jp/contests/abc146/tasks/abc146_c

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main() {

    ll a,b,x;cin>>a>>b>>x;

    if (a > x || b > x) {
        cout << "0" << endl;
        return 0;
    }

    ll aux = 0;
    ll n = 1;
    while (aux <= x) {
        string pedro = to_string(n);
        ll nPedro = pedro.length();
        if (x < ((a*n)+(b*nPedro))) {
            break;
        }
        aux = (a*n)+(b*nPedro);
        n++;
    }
    n--;
    
    cout << n << endl;

    return 0;
}