//https://codeforces.com/group/Pf5PtyLxbM/contest/662604/problem/H

#include <bits/stdc++.h>
using namespace std;

int main() {
    int w,k; cin>>w>>k;

    int aux = w-k;
    if (aux<0) aux *= -1;
    
    cout << k+aux << endl;
}