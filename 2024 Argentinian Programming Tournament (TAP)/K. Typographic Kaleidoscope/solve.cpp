//https://codeforces.com/gym/105321/problem/K

#include <iostream>
#include <vector>
using namespace std;

//incompleto

bool boolA(int i, int j, vector<vector<char>>& mz) {
    if (mz[i][j] != '#' || mz[i][j]  == 'A' || mz[i][j]  == 'P' || mz[i][j]  == 'T') return false;
    if (mz[i+1][j+2] != '#' || mz[i+1][j+2] == 'A' || mz[i+1][j+2] == 'P' || mz[i+1][j+2] == 'T') return false;
    if (mz[i+2][j+2] != '#' || mz[i+2][j+2] == 'A' || mz[i+2][j+2] == 'P' || mz[i+2][j+2] == 'T') return false;
    if (mz[i+3][j+2] != '#' || mz[i+3][j+2] == 'A' || mz[i+3][j+2] == 'P' || mz[i+3][j+2] == 'T') return false;
    if (mz[i+4][j+2] != '#' || mz[i+4][j+2] == 'A' || mz[i+4][j+2] == 'P' || mz[i+4][j+2] == 'T') return false;
    if (mz[i+3][j+1] == '#' || mz[i+3][j+1] == 'A' || mz[i+3][j+1] == 'P' || mz[i+3][j+1] == 'T') return false;
    return true;
}
void marcarA(int i, int j, vector<vector<char>>& mz) {
    mz[i][j] = 'A';
    mz[i][j+1] = 'A';
    mz[i][j+2] = 'A';
    mz[i+1][j] = 'A';
    mz[i+1][j+2] = 'A';
    mz[i+2][j] = 'A';
    mz[i+2][j+1] = 'A';
    mz[i+2][j+2] = 'A';
    mz[i+3][j] = 'A';
    mz[i+3][j+2] = 'A';
    mz[i+4][j] = 'A';
    mz[i+4][j+2] = 'A';
}

bool boolP(int i, int j, vector<vector<char>>& mz) {
    if (mz[i][j] != '#' || mz[i][j] == 'A' || mz[i][j] == 'P' || mz[i][j] == 'T') return false;
    if (mz[i+1][j] != '#' || mz[i+1][j] == 'A' || mz[i+1][j] == 'P' || mz[i+1][j] == 'T') return false;
    if (mz[i+2][j] != '#' || mz[i+2][j] == 'A' || mz[i+2][j] == 'P' || mz[i+2][j] == 'T') return false;
    return true;
}

void marcarP(int i, int j, vector<vector<char>>& mz) {
    mz[i][j] = 'P';
    mz[i][j+1] = 'P';
    mz[i][j+2] = 'P';
    mz[i+1][j] = 'P';
    mz[i+1][j+2] = 'P';
    mz[i+2][j] = 'P';
    mz[i+2][j+1] = 'P';
    mz[i+2][j+2] = 'P';
    mz[i+3][j] = 'P';
    mz[i+4][j] = 'P';
}

bool boolT(int i, int j, vector<vector<char>>& mz) {
    if (mz[i][j] != '#' || mz[i][j] == 'A' || mz[i][j] == 'P' || mz[i][j] == 'T') return false;
    if (mz[i+1][j+1] != '#' || mz[i+1][j+1] == 'A' || mz[i+1][j+1] == 'P' || mz[i+1][j+1] == 'T') return false;
    return true;
}

void marcarT(int i, int j, vector<vector<char>>& mz) {
    mz[i][j] = 'T';
    mz[i][j+1] = 'T';
    mz[i][j+2] = 'T';
    mz[i+1][j+1] = 'T';
    mz[i+2][j+1] = 'T';
    mz[i+3][j+1] = 'T';
    mz[i+4][j+1] = 'T';
}


int main() { 

    int rows, columns, t, a, p;
    p=0;a=0;t=0;

    cin >> rows >> columns;

    vector<vector<char>> mz(rows, vector<char>(columns));

    for (int i=0;i<rows;i++) {
        for (int j=0;j<columns;j++) {
            cin >> mz[i][j];
        }
    }

    for (int i=0;i<rows;i++) {
        for (int j=0;j<columns;j++) {
            if (i < rows - 4 && j < columns - 2) {
                if (boolA(i, j, mz)) {
                marcarA(i, j, mz);
                a++;
                } 
                if (boolP(i, j, mz)) {
                marcarP(i, j, mz);
                p++;
                }
                if (boolT(i, j, mz)) {
                marcarT(i, j, mz);
                t++;
                }
            }
        }
    }

    cout << t << " " << a << " " << p;


    return 0;
}
