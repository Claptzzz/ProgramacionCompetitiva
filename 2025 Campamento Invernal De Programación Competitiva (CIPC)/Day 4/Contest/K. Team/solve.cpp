//https://codeforces.com/group/TY5qlgX1RN/contest/625165/problem/K

#include <bits/stdc++.h>
using namespace std;

void rellenar(vector<int>& x) {
    for (int i = 0; i<x.size(); i++) {
        cin >> x[i];
    }
}

int main() {

    int n;cin>>n;

    vector<int> array(3);

    int cant = 0;
    int aux = 0;

    for(int i=0; i<n; i++) {
        rellenar(array);
        if (array[0] == 1) {
            aux++;
        }
        if (array[1] == 1) {
            aux++;
        }
        if (array[2] == 1) {
            aux++;
        }
        if (aux>1) {
            cant++;
        }
        aux=0;
    }

    cout<<cant;

    return 0;
}