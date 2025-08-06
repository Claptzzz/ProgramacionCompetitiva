//https://cses.fi/problemset/task/1070

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;cin>>n;
    vector<int> a(n);
    int aux = n;

    if (n == 1) {
        cout << "1";
    } else if (n == 4) {
      cout << "2 " << "4 " << "1 " << "3";
    } else if (n<4) {
        cout << "NO SOLUTION";
    } else {
        for (int i=n-1; i>=0; i--) {
            a[i] = aux;
            aux--;
            aux--;
            if (aux<=0) {
                aux =n-1;
            }
        }
        for (int i=0; i<n; i++) {
            cout << a[i] << " ";
        }
    }

    return 0;
}