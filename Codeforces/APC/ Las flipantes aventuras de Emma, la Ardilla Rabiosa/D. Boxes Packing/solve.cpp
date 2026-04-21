//https://codeforces.com/group/mWZlmOaTZR/contest/686135/problem/D

#include <bits/stdc++.h>
using namespace std;

int main() {

    map<int,int> m;
    int n;cin>>n;
    int mayor = 0;
    for (int i=0;i<n;i++){
        int aux;cin>>aux;
        m[aux] += 1;
    }
    for (auto x: m){
        if (x.second > mayor) {
            mayor = x.second;
        }
    }
    cout << mayor << endl;

    return 0;
}