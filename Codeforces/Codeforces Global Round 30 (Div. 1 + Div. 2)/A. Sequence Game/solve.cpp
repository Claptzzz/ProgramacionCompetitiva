//https://codeforces.com/contest/2164/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;
    while(t--) {
        int n;cin>>n;
        vector<int> a(n);
        int max = INT_MIN;
        int min = INT_MAX;
        for (int i=0;i<n;i++) {
            cin>>a[i];
            if (a[i] > max) max = a[i];
            if (a[i] < min) min = a[i];
        }
        int x;cin>>x;
        if (x<min || x>max) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}