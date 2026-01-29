//https://codeforces.com/group/Pf5PtyLxbM/contest/666695/problem/J

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,k;cin>>n>>k;
    vector<char> a;
    for (int i=0;i<n;i++){
        char aux;cin>>aux;
        a.push_back(aux);
    }
    int cant = 0;
    bool b = false;
    int cantp = 0;
    for (int i=0;i<n;i++) {
        if (k!=0) {
            if(a[i]=='.') {
                cantp++;
                k--;
            } else if (a[i] == 'o') {
                cant++;
            }
        } else {
            for (int j =i-1;j>=0;j--) {
                if (cant > 0) {
                    a[j] = 'o';
                    cant--;
                } else {
                    if (!b) {
                        a[j] = '#';
                        b = true;
                    } else {
                        a[j] = '.';
                    }
                }
            }
            break;
        }
    }
    bool o = false;
    if(k!=0){
        for(int i = 0;i<n;i++){
            if (cantp > 0) {
                a[i] = '.';
                cantp--;
            } else if (!b) {
                a[i] = '#';
                b = true;
            } else {
                if (i == n-1) {
                    a[i] = '#';
                } else {
                    a[i] = 'o';
                }
            }
        }
    }
    for (int i=0;i<n;i++) {
        cout << a[i];
    }
    return 0;
}