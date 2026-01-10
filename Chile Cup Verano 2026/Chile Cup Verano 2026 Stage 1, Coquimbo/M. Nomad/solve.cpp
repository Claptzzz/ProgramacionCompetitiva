//https://codeforces.com/group/Pf5PtyLxbM/contest/662604/problem/M

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,d; cin>>n>>d;
    vector<int> a(n);
    int aux;
    for (int i=0; i<n; i++) {
        cin>>aux;
        a[i] = aux;
    }


    bool ward = false;
    int cant = 0;
    int papu = 0;
    for (int k: a) {
        if (k != 0) {
            ward = true;
            cant++;
            papu = k;
        }
    }
    if (cant < 2 && papu < d) {
        cout << "-1" << endl;
        return 0;
    }


    while(d!=0) {
        for (int i=0; i<a.size(); i++) {
            if (a[i] != 0) {
                for (int j=1; j<=a[i]; j++) {
                    cout << i+1 << " ";
                    d--;
                    if (d == 0) {
                        return 0;
                    }
                }
            }
        }
    }




}