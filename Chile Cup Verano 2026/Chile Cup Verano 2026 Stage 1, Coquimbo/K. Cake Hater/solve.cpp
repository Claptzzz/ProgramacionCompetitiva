//https://codeforces.com/group/Pf5PtyLxbM/contest/662604/problem/K

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b,m;cin>>n>>a>>b;

    set<int> bad;
    int aux;
    for (int i=0; i<b; i++) {
        cin>>aux;
        bad.insert(aux);
    }

    int i = 0;
    int in;
    int bad_cant;
    int total;
    int f = 1;
    while (f <= n) {
        cin>>i;
        total = i;
        bad_cant = 0;
        while (i--) {
            cin >>in;
            if(bad.count(in)) {
                bad_cant++;
            }
        }
        if (total/3 < bad_cant) {
            cout << f << endl;
            return 0;
        }
        f++;
    }
    cout << "-1" << endl;

}