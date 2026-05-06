//https://atcoder.jp/contests/abc332/tasks/abc332_a

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,s,k;cin>>n>>s>>k;
    int t = 0;
    for(int i=0; i<n; i++){
        int p,q;cin>>p>>q;
        t += q*p;
    }
    if (t<s) {
        t+=k;
    }
    cout << t << endl;

    return 0;
}