//https://codeforces.com/contest/2131/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main() {

    int t;cin>>t;

    while (t--) {

        ll n;cin>>n;
        for (int i=0; i<n; i++) {
            if (i%2==0 || i==0) {
                cout << "-1 "; 
            } else {
                if (i == n-1) {
                    cout << "2";
                } else {
                    cout << "3 ";
                }
            }
        }
        cout << endl;

    }

    return 0;
}