//https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
using namespace std;


void rellenar(priority_queue<int>& x, int n) {
    int aux = 0;
    for (int i = 0; i<n-1; i++) {
        cin >> aux;
        x.push(aux);
    }
}

int main() {

    int n;cin>>n;

    priority_queue<int> a;

    rellenar(a,n);

    for (int i = n; i>0;i--) {
        int actual = a.top();
        if (actual != i) {
            cout << i;
            break;
        }
        a.pop();
    }

    return 0;
}