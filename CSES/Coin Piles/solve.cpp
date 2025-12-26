//https://cses.fi/problemset/task/1754

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;

    while(t--) {
        int a,b;cin>>a>>b;
        int max, min;
        if (a < b) {
            max = b;
            min = a;
        } else {
            max = a;
            min = b;
        }

        if ((min*2)-max < 0) {
            cout << "NO" << endl;
        } else if (((min*2)-max) % 3) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}