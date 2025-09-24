//pdffffff sorry bros

#include <bits/stdc++.h>
using namespace std;

bool esDos(int i, int j, vector<vector<char>>& mz, int n, int m) {

    for (i ; i<n; i++) {
        if (mz[])
    }

    return true;
}


int main() {

    int n,m;cin>>n>>m;

    vector<vector<char>> mz(n, vector<char>(m));

    bool esDosB = false;
    bool esTresB = false;

    for (int i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            if (mz[i][j] == '*') {
                if (esDos(i,j,mz,n,m)) {
                    !esDosB;
                    break;
                } else {
                    !esTresB;
                }
            }
        }
        if (esTresB) {
            break;
        }
        if (esDosB) {
            break;
        }
    }

    if (esTresB) {
        cout << "Triple Corolla Flower";
    } else if (esDosB) {
        cout << "Double Petal Flower";
    }


    return 0;
}