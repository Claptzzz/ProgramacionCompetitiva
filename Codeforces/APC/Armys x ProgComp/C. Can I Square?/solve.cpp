//https://codeforces.com/group/mWZlmOaTZR/contest/684307/problem/C

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;

    while(t--) {
        int n;cin>>n;
        double sum = 0;
        for (int i=0; i<n;i++) {
            int aux;cin>>aux;
            sum += aux;
        }
        if (sqrt(sum) == static_cast<int>(sqrt(sum))) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}