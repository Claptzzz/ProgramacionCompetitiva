//https://codeforces.com/group/Pf5PtyLxbM/contest/673760/problem/E

#include <bits/stdc++.h>
using namespace std;

bool verificar (vector<vector<char>>& mz, int i, int j, int n, int m) {
    bool primero = true;
    bool segundo = true;
    bool tercero = true;
    bool cuarto = true;
    for(int r = i; r >= 0; r--) {
        if (mz[r][j] == 'o') primero = false;
    }
    for(int r = i; r < n; r++) {
        if (mz[r][j] == 'o') segundo = false;
    }
    for(int r = j; r >= 0; r--) {
        if (mz[i][r] == 'o') tercero = false;
    }
    for(int r = j; r < m; r++) {
        if (mz[i][r] == 'o') cuarto = false;
    }
    if (primero || segundo || tercero || cuarto) {
        return true;
    }
    return false;
}

int main() {

    int n,m;cin>>n>>m;
    vector<vector<char>> mz(n, vector<char>(m));
    int cars = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            char aux;cin>>aux;
            mz[i][j] = aux;
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (mz[i][j] == '.') {
                bool papu = verificar(mz, i, j, n, m);
                if (papu) {
                    cars++;
                }
            }
        }
    }
    cout << cars << endl;

    return 0;
}