//https://codeforces.com/group/TY5qlgX1RN/contest/624447/problem/B

#include <bits/stdc++.h>
using namespace std;

//incomplete

vector<long long> rellenar(vector<long long> x) {
    for (int i= 0; i<x.size(); i++) {
        cin >> x[i];
    }
    return x;
}

bool comprar(vector<long long> m, long long p, int index) {

    if (m[index] < p) {
        return true;
    }
    return false;
}

int main() {
    
    string h;
    double cantB = 0, cantS = 0, cantC = 0, burger = 0;

    cin>>h;

    for (int i = 0; i < h.size(); i++) {
        if(h[i] == 'B') {
            cantB++;
        } else if (h[i] == 'S') {
            cantS++;
        } else {
            cantC++;
        }
    }

    vector<double> cant(3);
    
    cant[0] = cantB;
    cant[1] = cantS;
    cant[2] = cantC;

    vector<long long> n(3);
    vector<long long> m(3);

    n = rellenar(n);
    m = rellenar(m);

    long long money;cin>>money;
    long long min = 9999;
    long long aux = 0;
    int index = 0;
    
    for (int i = 0; i<3; i++) {
        if (cant[i] > 0) {
            aux = n[i]/cant[i];
            if (aux < min) {
                min = aux;
                index = i;
            }   
        }
    }

    while (comprar(m, money, index)) {
        money = money - m[index];
        n[index]++;
        min = -1;
        for (int i = 0; i<3; i++) {
            if (cant[i] > 0) {
                aux = n[i]/cant[i];
                if (aux < min || min == -1) {
                    min = aux;
                    index = i;
                }
            }
        }
    }

    cout << min;

    return 0;
}