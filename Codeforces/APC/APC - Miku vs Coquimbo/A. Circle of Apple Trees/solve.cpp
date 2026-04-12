//https://codeforces.com/group/mWZlmOaTZR/contest/682677/problem/A
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        set<int> papu;
        for (int i=0; i<n; i++) {
            int aux;cin>>aux;
            papu.insert(aux);
        }
        cout << papu.size() << endl;
    }
    return 0;
}