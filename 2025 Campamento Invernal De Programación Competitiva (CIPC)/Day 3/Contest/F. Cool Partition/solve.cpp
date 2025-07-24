//https://codeforces.com/group/TY5qlgX1RN/contest/624902/problem/F

#include <bits/stdc++.h>
using namespace std;

void rellenar(vector<int>& x) {
    for (int i = 0; i<x.size(); i++) {
        cin >> x[i];
    }
}

int main() {

    int t;cin>>t;
    int cant = 0;
    bool b = false;

    while (t>0) {

        int n;cin>>n;
        vector<int> array(n);
        vector<int> arrayX(n);
        rellenar(array);
        for (int i=0; i<array.size(); i++) {
            arrayX[i] = array[i];
            for (int j=0; j<array.size();j++) {
                if (arrayX[i] == array[j]) {
                    b = true;
                }
            }
        }


        t--;
        cant = 0;
    }

    return 0;
}