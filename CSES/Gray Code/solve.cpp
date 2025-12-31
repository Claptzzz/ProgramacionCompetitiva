//https://cses.fi/problemset/task/2205

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;cin>>n;

    vector<int> a(n,0);

    for (int j=0; j<a.size(); j++) {
        cout << a[j];
    }
    cout << endl;
    for (int i=0; i<pow(2,n)-1; i += 0) {
        for (int j=a.size()-1; j>=0; j--) {
            if (a[j] == 0) {
                a[j] = 1;
                
                //imprimimos despues de un cambio
                for (int j=0; j<a.size(); j++) {
                    cout << a[j];
                }
                cout << endl;
                i++;
                
                if (a[j+1] == 1 && i<pow(2,n)-1) {
                    a[j+1] = 0;
                    //si el anterior era un 1, entonces lo hacemos 0 e imprimimos
                    for (int j=0; j<a.size(); j++) {
                        cout << a[j];
                    }
                    cout << endl;
                    i++;
                }
                
            }
        }
    }

    return 0;
}