//https://codeforces.com/group/mWZlmOaTZR/contest/686135/problem/C

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,m;cin>>n>>m;
    map<string,string> map;

    while(n--) {
        string a;cin>>a;
        string b;cin>>b;
        map[b] = a;
    }
    while(m--){
        string a;cin>>a;
        string b;cin>>b;
        string b_or = b;
        b.pop_back();
        string aux= map[b];
        cout << a << " " << b_or << " #" << aux << endl;
    }

    return 0;
}