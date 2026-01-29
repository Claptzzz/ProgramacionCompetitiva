//https://codeforces.com/group/Pf5PtyLxbM/contest/666695/problem/E

#include <bits/stdc++.h>
using namespace std;

int main() {

    int x,y;cin>>x>>y;
    int a = x+y;
    a /= 2;
    int b = a - y;

    cout << a << " " << b;

    return 0;
}