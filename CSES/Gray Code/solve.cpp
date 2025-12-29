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
    /* se ve enredado asi q lo comento, la logica que use fue ver el array desde el ultimo punto,
    luego cuando encuentre un 0 lo transforma a 1 y todo lo que este a la derecha lo transforma a 0, y asi sucesivamente 
    se recorren todos los binarios */
    for (int i=0; i<pow(2,n)-1; i++) {
        for (int j=a.size()-1; j>=0; j--) {
            if (a[j] == 0) {
                a[j] = 1;
                for (int k=j+1; k<a.size(); k++) {
                    a[k] = 0;
                }
                break;
            }
        }
        for (int j=0; j<a.size(); j++) {
            cout << a[j];
        }
        cout << endl;
    }

    return 0;
}