//https://codeforces.com/group/TY5qlgX1RN/contest/626062/problem/K

#include <bits/stdc++.h>
using namespace std;

bool revisar(int i, int j, vector<vector<char>>& array, char l, vector<vector<bool>>& arrayBool) {
    bool aux = true;

    if (l == 'R') {
        if (array[i][0] == 'R' && array[i][7] == 'R') {
            for (int a = 0; a<8; a++) {
                char actual = array[i][a];
                if (actual != 'R') {
                    aux = false;
                    return false;
                }
            }
            if (aux) {
                return true;
            }
        }
    } else {
        if (array[0][j] == 'B' && array[7][j] == 'B') {
            for (int a = 0; a<8; a++) {
                char actual = array[a][j];
                if (actual != 'B') {
                    aux = false;
                    return false;
                }
            }
            if (aux) {
                return true;
            }
        }
    }
    return false;
}

int main() {

    int t;cin>>t;

    while (t--) {

        vector<vector<char>> array(8, vector<char>(8));
        vector<vector<bool>> arrayBool(8, vector<bool>(8, true));

        bool aux = false;

        for (int i=0;i<8;i++) {
            for (int j=0;j<8;j++) {
                cin >> array[i][j];
            }
        }

        for (int i=0;i<8;i++) {
            for (int j=0;j<8;j++) {
                    if (array[i][j] == 'R' && arrayBool[i][j] != false) {
                        aux = revisar(i, j, array, 'R', arrayBool);
                        if (aux) {
                            cout << "R" << endl;
                            break;
                        }
                    } if (array[i][j] == 'B' && arrayBool[i][j] != false) {
                        aux = revisar(i, j, array, 'B', arrayBool);
                        if (aux) {
                            cout << "B" << endl;
                            break;
                        }
                    }
            }
            if (aux) break;
        }
    }

    return 0;
}