//https://atcoder.jp/contests/abc130/tasks/abc130_b

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, x, cont = 1, camino = 0; cin >> n >> x;
    
    for(int i = 0; i < n; i++) {
        int l; cin >> l;
        camino += l;
        if(camino <= x) {
            cont++;
        }
    }

    cout << cont;


    return 0;
}