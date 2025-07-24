//https://codeforces.com/group/TY5qlgX1RN/contest/624447/problem/I

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, H, W;
    cin >> N >> H >> W;
    char toW, toH;
    for (int i = 0; i < N; i++) {
        cin >> toW >> toH;
        if (W == 0 || toW == 'Y') {
            cout << "Y ";
            W++;
            H--;
        } else {
            cout << "N ";
        }
        if (H == 0 || toH == 'Y') {
            cout << "Y" << endl;
            H++;
            W--;
        } else {
            cout << "N" << endl;
        }
    }
 
    return 0;
}