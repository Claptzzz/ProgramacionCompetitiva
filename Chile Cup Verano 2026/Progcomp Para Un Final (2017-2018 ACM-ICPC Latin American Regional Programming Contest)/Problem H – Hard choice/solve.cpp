//https://codeforces.com/group/Pf5PtyLxbM/contest/675331

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c,b,p;cin>>c>>b>>p;
    int cr,br,pr;cin>>cr>>br>>pr;
    int aux = 0;
    if (cr-c > 0) {
        aux += cr-c;
    }
    if (br-b > 0) {
        aux += br-b;
    }
    if (pr-p > 0) {
        aux += pr-p;
    }
    cout << aux << endl;
    return 0;
}
