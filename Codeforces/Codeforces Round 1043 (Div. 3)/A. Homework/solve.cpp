//https://codeforces.com/contest/2132/problem/A

#include <bits/stdc++.h>
using namespace std;

void rellenar(vector<char>& x) {
    for (int i = 0; i<x.size(); i++) {
        cin >> x[i];
    }
}

int main() {

    int t;cin>>t;

    while (t--) {
        int n;cin>>n;
        vector<char> a1(n);
        rellenar(a1);
        int m;cin>>m;
        vector<char> a2(m);
        rellenar(a2);
        vector<char> orden(m);
        rellenar(orden);
        stack<char> antes;
        queue<char> despues;

        for (int i=0; i<m;i++) {
            if (orden[i] == 'D') {
                despues.push(a2[i]);
            } else {
                antes.push(a2[i]);
            }
        }

        while (!antes.empty()) {
            cout << antes.top();
            antes.pop();
        }
        for (int i=0;i<n;i++) {
            cout << a1[i];
        }
        while (!despues.empty()) {
            cout << despues.front();
            despues.pop();
        }

        cout << endl;
    }
    

    return 0;
}