//https://codeforces.com/gym/640342/attachments
//PDF
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;cin>>n;
    vector<vector<char>> a(n, vector<char>(n));
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (a[i][j] == 'T') {
                if (i+1<n && i+2<n) {
                    //horizontal
                    if (a[i+1][j]=='C' && a[i+2][j]=='P') {
                        cout << "SI" << endl;
                        return 0;
                    }
                }
                if (j+1<n && j+2<n) {
                    //vertical
                    if (a[i][j+1]=='C' && a[i][j+2]=='P') {
                        cout << "SI" << endl;
                        return 0;
                    }
                }
                if (i+2<n && j+2<n) {
                    //cruzado
                    if (a[i+1][j+1]=='C' && a[i+2][j+2]=='P') {
                        cout << "SI" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO" << endl;

    return 0;
}