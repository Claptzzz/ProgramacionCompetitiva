//https://codeforces.com/group/TY5qlgX1RN/contest/624902/problem/D

#include <bits/stdc++.h>
using namespace std;

void rellenar(vector<int>& x) {
    for (int i = 0; i<x.size(); i++) {
        cin >> x[i];
    }
}

int main() {

    int n;cin>>n;
    
    vector<int> nodos((n-1)*2);

    rellenar(nodos);
    sort(nodos.begin(), nodos.end());
    int max = -1;   
    int aux = 1;
    int anterior;

    for (int i=0; i<(n-1)*2;i++) {
        if (nodos[i] == anterior || max == -1) {
            aux++;
            if (max < aux) {
                max = aux;
            }
        } else {
            aux = 1;
        }
        anterior = nodos[i];
    }

    int a = (n-1)-max;

    cout << a;

    return 0;
}