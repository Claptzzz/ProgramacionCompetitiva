//https://codeforces.com/contest/2133/problem/0

#include <bits/stdc++.h>
using namespace std;

void rellenar(priority_queue<int>& x, int n) {
    for (int i = 0; i<n; i++) {
        int aux;cin>>aux;
        x.push(aux);
    }
}

int main() {

    int t;cin>>t;

    while(t--) {
        int n;cin>>n;
        priority_queue<int> e;
        rellenar(e,n);
        bool aux = false;
        for (int i=0; i<n-1; i++) {<
            int head = e.top();
            e.pop();
            if (e.top() == head) {
                aux = true;
                break;
            }
        }
        if (aux) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}