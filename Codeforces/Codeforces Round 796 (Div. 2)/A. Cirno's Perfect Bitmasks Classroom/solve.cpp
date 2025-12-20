//https://codeforces.com/contest/1688/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;

    while(t--) {
        int n;cin>>n;

        int i = n&-n;

        while ( !(n&i) || !(n^i)) {
            i++;
        }
        cout << i << endl;
    }

    return 0;
}