//https://codeforces.com/group/TY5qlgX1RN/contest/624645/problem/A

#include <bits/stdc++.h>
using namespace std;

bool rellenarSub(vector<long long>& x, int j, vector<long long> a) {
    bool aux = false;
    int ant = -1;
    int aaaa=0;
    for (int i=j; i<x.size(); i++) {
        x[i] = a[i];
        if (ant == -1) {
            ant = x[i];
        } else {
            if (ant*pow(2,aaaa) < x[i]*pow(2,aaaa+1)) {
                aux = true;
            } else {
                aux = false;
            }
        }
    }
    return aux;
}

void rellenar(vector<long long>& x) {
    for (int i = 0; i<x.size(); i++) {
        cin>>x[i];
    }
}

int main() {
 
    int t;cin>>t;
    int aux = 0;
    bool b;

    for (int i = 0; i<t; i++) {
        int n,k; cin>>n>>k;
        vector<long long> array(n);
        vector<long long> subArray(k);
        rellenar(array);
        for (int j=0;j<n-k;j++) {
            if(rellenarSub(subArray, j, array)) {
                aux++;
            }
        }
        cout<<aux;
        aux = 0;
    }

    return 0;
}