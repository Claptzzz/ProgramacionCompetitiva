#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int l,b;cin>>l>>b;

    int aux = 0;

    while (l < b || l == b) {
        l = l*3;
        b = b*2;
        aux++;
    }
    cout << aux;
    return 0;
}