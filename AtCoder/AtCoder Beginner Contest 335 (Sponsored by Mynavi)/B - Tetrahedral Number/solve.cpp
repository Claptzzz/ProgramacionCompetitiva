//https://atcoder.jp/contests/abc335/tasks/abc335_b

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,x=0,y=0,z=0;cin>>n;

    while (x!=n) {
        while(x+y+z != n) {
            while(x+y+z != n) {
                cout << x << " " << y << " " << z << endl;
                z++;
            }
            cout << x << " " << y << " " << z << endl;
            y++;
            z = 0;
        }
        cout << x << " " << y << " " << z << endl;
        x++;
        y = 0;
    }
    cout << x << " " << y << " " << z << endl;

    
    return 0;
}