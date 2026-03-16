//https://codeforces.com/group/Pf5PtyLxbM/contest/673760/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long double ll;

int main() {

    ll c;cin>>c;
    ll f;cin>>f;
    ll best = std::numeric_limits<long double>::max();
    ll num = 1;
    ll bestN = 0;
    while(c--){
        ll d,s;cin>>d>>s;
        ll aux = (f-d)/s;
        if (aux < best) {
            best = aux;
            bestN = num;
        }
        num++;
    }
    cout << bestN << endl;

    return 0;
}