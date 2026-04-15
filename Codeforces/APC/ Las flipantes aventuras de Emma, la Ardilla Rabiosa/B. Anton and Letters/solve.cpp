//https://codeforces.com/group/mWZlmOaTZR/contest/686135/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    set<char> s;
    for (char c : a) {
        if (c >= 'a' && c <= 'z') {
            s.insert(c);
        }
    }
    cout << s.size() << endl;
    
    return 0;
}