//https://codeforces.com/contest/2167/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;

    while(t--) {
        int n; cin>>n;
        priority_queue<char> pedro;
        priority_queue<char> juan;

        for (int i = 0; i<n; i++) {
            char aux;
            cin >> aux;
            pedro.push(aux);
        }
        for (int i = 0; i<n; i++) {
            char aux;
            cin >> aux;
            juan.push(aux);
        }
        bool branco = false;
        for (int i = 0; i<n; i++) {
            char nettle, javier;
            nettle = pedro.top();
            javier = juan.top();
            if (nettle != javier) {
                cout << "NO" << endl;
                branco = true;
                break;
            }
            pedro.pop();
            juan.pop();
        }
        if (!branco) {
            cout << "YES" << endl;
        }
    }
    return 0;
}