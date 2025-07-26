//https://codeforces.com/group/TY5qlgX1RN/contest/625396/problem/D

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main() {

    int t;cin>>t;

    while (t--) {

        ll a,b;cin>>a>>b;
        ll xK,yK;cin>>xK>>yK;
        ll xQ,yQ;cin>>xQ>>yQ;

        ll aK = a-xK;
        ll bK = b-yK;

        if (aK < 0) aK *= -1;
        if (bK < 0) bK *= -1;

        ll aQ = a-xQ;
        ll bQ = b-yQ;

        if (aQ < 0) aQ *= -1;
        if (bQ < 0) bQ *= -1;
        
        if ((aK+bK) == (aQ+bQ)) {
            if ((aK == a && bK == b) || (aQ == b && bQ == a) || (aK == b && bK == a) || (aQ == a && bQ ==b)) {
                cout << "2" << endl;
            } else {
                cout << "1" << endl;
            }
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}