//https://codeforces.com/group/TY5qlgX1RN/contest/625165/problem/H

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;

    while(t--) {

        int a,b,c;cin>>a>>b>>c;
        int cont = 0;

        while (b%a == 0 && c%b == 0) {

            if (c-b == b-a) {
                cont = (c-b)*2;
            } else if ()

        }
        cout << cont << endl;
        cout << a << " " << b << " " << c << endl;
    }


    return 0;
}