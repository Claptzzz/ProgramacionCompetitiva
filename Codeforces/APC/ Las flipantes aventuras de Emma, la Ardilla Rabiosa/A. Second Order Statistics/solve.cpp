//https://codeforces.com/group/mWZlmOaTZR/contest/686135/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;cin>>n;
    set<int> s;
    while(n--) {
        int aux;cin>>aux;
        s.insert(aux);
    }
    auto it = s.begin();
    it++;
    if(it == s.end()) {
        cout << "NO" << endl;
    } else {
        cout << *it << endl;
    }

    return 0;
}