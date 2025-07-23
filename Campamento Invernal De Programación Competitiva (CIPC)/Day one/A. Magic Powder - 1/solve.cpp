//https://codeforces.com/group/TY5qlgX1RN/contest/624447/problem/A

#include <bits/stdc++.h>
using namespace std;

vector<int> rellenar(vector<int> x) {

      for (int i=0; i<x.size(); i++) {
        cin >> x[i];
      }
      return x;
}

int main() {
    
    int arr, mp, min, aux, index = 0;

    cin >> arr >> mp;
    
    if (arr == 0) cout << "0";
    else {
        
    vector<int> n (arr);
    vector<int> m (arr);

    n = rellenar(n);
    m = rellenar(m);
    
    min = 100000;
    for(int i=0; i<arr; i++) {
        aux = m[i]/n[i];
        if (min > aux) {
            min = aux;
            index = i;
            }
        }

    while (mp >= 0 ) {
        min = 100000;
        for(int i=0; i<arr; i++) {
        aux = m[i]/n[i];
         if (min > aux) {
            min = aux;
            index = i;
            }
        }
        m[index]++;
        mp--;
    }

    cout << min;
    }

    return 0;
}