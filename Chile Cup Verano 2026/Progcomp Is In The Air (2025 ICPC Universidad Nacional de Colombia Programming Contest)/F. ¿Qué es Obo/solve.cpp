//https://codeforces.com/group/Pf5PtyLxbM/contest/672013/problem/F

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, x;cin>>a>>x;
    ll count = 0;
    bool possible = true;

    for (ll i = 2; i * i <= a; i++) {
        while (a % i == 0) {
            if (i > x) {
                possible = false;
                break; 
            }
            count++;
            a /= i;
        }
        if (!possible) break;
    }

    if (possible && a > 1) {
        if (a > x) {
            possible = false;
        } else {
            count++;
        }
    }

    if (possible) {
        cout << count << endl;
    } else {
        cout << "Que es Obo?" << endl;;
    }

    return 0;
}