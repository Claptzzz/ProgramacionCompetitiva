//https://codeforces.com/problemset/problem/4/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    map<string, int> m;
    while(n--) {
        string name;cin>>name;
        if (m.count(name) == 0){
            cout << "OK" << endl;
            m[name] = 1;
        } else {
            cout << name << m[name] << endl;
            m[name]++;
        }
    }
    return 0;
}