//https://codeforces.com/group/mWZlmOaTZR/contest/684307/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;
    while(t--) {
        int a,b;cin>>a>>b;
        int aux=1;
        int cont=1;
        
        for(int i=a; i<b; i+=aux) {
            cont++;
            aux+=1;
        }
        cout << cont << endl;
    }

    return 0;
}