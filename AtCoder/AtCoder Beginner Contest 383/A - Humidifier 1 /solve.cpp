//https://atcoder.jp/contests/abc383/tasks/abc383_a

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;cin>>n;
    int t,v;
    int ant_t;cin>>ant_t;
    int ant_v;cin>>ant_v;
    n--;
    while(n--){
        cin>>t>>v;
        int res = t-ant_t;
        ant_v -= res;
        if (ant_v < 0) ant_v = 0;
        ant_v += v;

        ant_t = t;
    }
    cout << ant_v << endl;

    return 0;
}