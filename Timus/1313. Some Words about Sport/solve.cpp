//https://acm.timus.ru/problem.aspx?space=1&num=1313

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;cin>>n;

    vector<vector<int>> mz(n, vector<int>(n));

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin >> mz[i][j];
        }
    }
    
    for (int aux = 1; aux <= n; aux++) {
        int i = aux - 1;
        int j = 0;
        
        for (int x = 0; x < aux; x++) {
            cout << mz[i][j] << " ";
            i -= 1; 
            j += 1; 
        }
    }
    
    for (int aux = n - 1; aux >= 1; aux--) {
        int i = n - 1;
        int j = n - aux;
        
        for (int x = 0; x < aux; x++) {
            cout << mz[i][j] << " ";
            i -= 1; 
            j += 1;
        }
    }

    return 0;
}