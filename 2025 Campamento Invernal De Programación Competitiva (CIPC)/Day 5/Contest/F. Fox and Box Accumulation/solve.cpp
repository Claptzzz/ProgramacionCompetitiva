//https://codeforces.com/group/TY5qlgX1RN/contest/625396/problem/F

#include <bits/stdc++.h>
using namespace std;

void rellenar(vector<int>& x) {
    for (int i = 0; i<x.size(); i++) {
        cin >> x[i];
    }
}

int main() {

    int n;cin>>n;

    vector<int> cajas(n);
    rellenar(cajas);
    sort(cajas.begin(), cajas.end());
    int aux = 0;

    while(cajas.size() > 0) {
        int mayor = cajas[n-1];
        cajas.erase(cajas.begin()+n);
        for (int i=cajas.size(); i>=0; i--) {
            if (cajas[i] != mayor) {
                cajas.erase(cajas.begin() + i);
            }
            if (cajas[i] == 0) {
                break;
            }
        }
        n--;
        aux++;
    }
    cout << aux;
    return 0;
}