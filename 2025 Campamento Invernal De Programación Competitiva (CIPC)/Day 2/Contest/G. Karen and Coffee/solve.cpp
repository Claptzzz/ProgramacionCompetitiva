//https://codeforces.com/group/TY5qlgX1RN/contest/624645/problem/G

#include <bits/stdc++.h>
using namespace std;

int cantB(vector<int> temps, int x) {
    int cant = 0;

    for (int i=0; i<temps.size()-1; i+=2) {
        if (x >= temps[i] && x <= temps[i+1]) {
            cant++;
        }
    }
    return cant;
}

void rellenar(vector<int>& x) {
    for (int i = 0; i<x.size(); i++) {
        cin >> x[i];
    }
}

int main() {
    
    int recipe, admi, questions, cant;
    cin >> recipe >> admi >> questions;

    vector<int> temps(recipe*2);
    vector<int> tempsQ(questions*2);

    rellenar(temps);
    rellenar(tempsQ);

    for (int i=0; i<tempsQ.size()-1; i += 2) {
        cant = 0;
        for (int j=tempsQ[i]; j<=tempsQ[i+1]; j++) {
            if (admi <= cantB(temps, j)) {
                cant++;
            }
        }
        cout << cant << endl;
    }
}