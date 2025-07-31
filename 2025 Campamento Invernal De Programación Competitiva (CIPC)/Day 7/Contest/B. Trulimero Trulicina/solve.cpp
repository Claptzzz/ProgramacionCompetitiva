//https://codeforces.com/group/TY5qlgX1RN/contest/626062/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;

    while(t--) {

        int n,m,k;cin>>n>>m>>k;

        vector<vector<int>> a(n*m, vector<int>(n*m));

        int cantR = n*m;
        cantR /= k;

        for (int i=0; i<n*m; i++) {
            for (int j=0; j<n*m; j++) {

                if (j<n*m) {
                    a[i][j] = i+1;
                }




            }
        }



    }

    return 0;
}