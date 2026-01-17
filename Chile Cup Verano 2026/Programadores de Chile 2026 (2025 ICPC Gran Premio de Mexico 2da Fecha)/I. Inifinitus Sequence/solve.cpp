//https://codeforces.com/group/Pf5PtyLxbM/contest/664619/problem/I

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;

    int x,k;
    while(t--) {
        cin >> x >> k;
        int aux = 1;
        if (k < x) {
            cout << aux << endl;
        } else {
            int ant = 1;
            int i = 1;
            int b = 1;
            while (true) {
                if ((aux * x) >= k) {
                    cout << i << endl;
                    break; 
                }
                b = aux;
                aux += ant;
                ant = b;
                i++;
            }
        }
    }
}