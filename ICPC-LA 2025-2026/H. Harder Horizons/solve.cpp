//https://codeforces.com/group/8JufKtWW7p/contest/106178/problem/H

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    int max = 0;
    int aux, mawile = 0;
    while (n--) {
        cin >>aux;
        if (aux > max) {
            max = aux;
            mawile++;
        }
    }
    cout << mawile;
    return 0;
}