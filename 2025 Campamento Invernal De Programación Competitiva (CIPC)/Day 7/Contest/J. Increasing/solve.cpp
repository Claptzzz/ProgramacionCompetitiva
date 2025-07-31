//https://codeforces.com/group/TY5qlgX1RN/contest/626062/problem/J

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

void rellenar(priority_queue<ll>& x, int n) {
    ll aux=0;
    for (int i = 0; i<n; i++) {
        cin >> aux;
        x.push(aux);
    }
}

int main() {

    int t;cin>>t;

    while (t--) {

        int n;cin>>n;
        priority_queue<ll> q;
        rellenar(q, n);
        ll ant = -1;
        bool auxB = true;

        for (int i=0; i<n;i++) {
            if (q.top() == ant) {
                cout << "NO" << endl;
                auxB = false;
                break;
            } else {
                ant = q.top();
            }
            q.pop();
        }
        if (auxB) {
            cout << "YES" << endl;
        }
    }
    return 0;
}