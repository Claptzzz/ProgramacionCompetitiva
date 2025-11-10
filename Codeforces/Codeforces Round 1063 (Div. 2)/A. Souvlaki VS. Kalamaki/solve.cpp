//https://codeforces.com/contest/2163/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;
    while(t--) {
        int n;cin>>n;
        priority_queue<int, vector<int>, greater<int>> a;
        for(int i=0; i<n; i++) {
            int aux;cin>>aux;
            a.push(aux);
        }
        bool b = true;
        for (int i=0; i<(n-1);i++) {
            int head = a.top();
            a.pop();
            int next = a.top();
            if ((i)%2 != 0) {
                if (head != next) b = false;
            }
        }
        cout << (b ? "YES" : "NO") << endl;
    }
    return 0;
}