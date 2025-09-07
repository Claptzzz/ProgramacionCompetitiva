//https://codeforces.com/contest/2137/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main() {

    int t;cin>>t;

    while(t--) {
        ll a,b;cin>>a>>b;

        bool mayorEven = false;
        bool impo = true;
        ll x = b;
        ll result = 0;
        if (a%2!=0 && b%2!=0) {
            cout << (a*b)+1 << endl;
        } else {
            while (!mayorEven) {
            if (x == 0) {
                impo = false;
                break;
            }
            if (b%x == 0) {
                ll div = b/x;
                ll aux = a*x;
                result = aux + div;

                if (result%2==0) {
                    mayorEven = true;
                }
            }
            if (!mayorEven) {
                if(x%2 == 0) {
                    x = x/2;
                } else {
                    x--;
                }
            }
        }
        if (!impo) {
            cout << "-1" << endl;
        } else {
            cout << result << endl;
        }
    }
    }

    return 0;
}