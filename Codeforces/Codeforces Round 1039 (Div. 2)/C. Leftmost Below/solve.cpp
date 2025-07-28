//https://codeforces.com/contest/2128/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

void rellenar(vector<ll>& x) {
    for (int i = 0; i<x.size(); i++) {
        cin >> x[i];
    }
}

int main() {

    int t;cin>>t;

    while (t--) {

        int n;cin>>n;
        vector<ll> array(n,0);
        vector<ll> arrayDes(n);
        rellenar(arrayDes);
        bool auxB = false;

        for (int i=0; i<n; i++) {
            ll des = arrayDes[i];
            if (i==0) {
                array[i] = des;
            } else if (des < array[i-1]) {
                for (int j=0; j<n;j++) {
                    if (des > array[j] && array[j] != 0) {
                        auxB = false;
                    } else {
                        auxB= true;
                        }
                    }
                    if (auxB) {
                        array[i] = des;
                    } else {
                        break;
                    }
            } else {
                ll nuevo = des-array[i-1];
                if (nuevo < array[i-1]) {
                    for (int j=0; j<n;j++) {
                        if (nuevo > array[j] && array[j] != 0) {
                            auxB = false;
                            break;
                        } else if (des-nuevo == array[j]) {
                            auxB = false; 
                            break;
                        } else {
                            auxB= true;
                        }
                    }
                    if (auxB) {
                        array[i] = des;
                    } else {
                        break;
                    }
                } else {
                    auxB = false;
                }
            }
        }
        if (auxB) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }

    return 0;
}