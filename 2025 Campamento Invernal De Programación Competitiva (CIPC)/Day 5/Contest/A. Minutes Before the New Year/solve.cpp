//https://codeforces.com/group/TY5qlgX1RN/contest/625396/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;

    while (t--) {
        int h,m;cin>>h>>m;
    
        int hf = 24-h;
        int mf = 60-m;
    
        if (hf > 1) {
            mf += (hf-1)*60;
        }
    
        cout << mf << endl;
    }
    

    return 0;
}