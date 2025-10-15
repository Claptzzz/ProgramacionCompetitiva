//https://atcoder.jp/contests/abc335/tasks/abc335_d

#include <bits/stdc++.h>
using namespace std;

int R(int n, int i, int j, int k) {



    return 0;
}

int main() {

    int n;cin>>n;

    int i = 0,j = 0;
    int aux = 1;

    vector<vector<int>> a(n,vector<int>(n));
    bool T = false;
    while (!T) {
        for (i=0;i<n;i++) {
            a[i][j] = aux;
            aux++;
        }
        for (j=0;j<n;j++){
            a[i][j] = aux;
            aux++;
        }
        for (i;i>=0;i--) {
            a[i][j] = aux;
            aux++;
        }
        for (j;j>=0;j--) {
            a[i][j] = aux;
            aux++;
        }
        
    }


    return 0;
}