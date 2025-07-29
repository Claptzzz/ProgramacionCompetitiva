//https://codeforces.com/group/TY5qlgX1RN/contest/625831/problem/L

#include <bits/stdc++.h>
using namespace std;

void rellenar(vector<int>& x) {
    int aux2, aux1;
    for (int i = 0; i<x.size(); i++) {
        cin >> aux2;
        cin >> aux1;
        x[i] = aux2 + aux1;
    }
}

int main() {

    int n;cin>>n;
    vector<int> array(n);
    rellenar(array);
    int cant = 0;

    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (array[i] == array[j]) {
                cant += 2;
            }
        }
    }

    cout << cant;

    return 0;
}