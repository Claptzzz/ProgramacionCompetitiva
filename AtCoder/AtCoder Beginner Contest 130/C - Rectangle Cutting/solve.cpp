//https://atcoder.jp/contests/abc130/tasks/abc130_c

#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, h, x, y;
    cin >> w >> h >> x >> y;

    int mayor = 0, menor = 0;
    if(w - x > x) {
        mayor = (w - x)*h;
        menor = x*h;
    } else {
        mayor = x*h;
        menor = (w - x)*h;
    }

    int mayor2 = 0, menor2 = 0;
    if(h - y > y){
        mayor2 = (h - y)*w;
        menor2 = y*w;
    } else {
        mayor2 = y*w;
        menor2 = (h - y)*w;
    }

    if(mayor == mayor2) cout << menor << " 1" << endl;
    else {
        if(mayor < mayor2) cout << menor << " 0" << endl;
        else cout << menor2 << " 0" << endl;
    }
    return 0;
}