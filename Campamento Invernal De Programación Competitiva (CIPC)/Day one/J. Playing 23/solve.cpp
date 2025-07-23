//https://codeforces.com/group/TY5qlgX1RN/contest/624447/problem/J

#include <bits/stdc++.h>
using namespace std;

int main() {

    int rounds; cin>>rounds;

    int JHand = 0, MHand = 0, aux, commons = 0;

    for (int i=0; i<2; i++) {
        cin>>aux;
        if(aux > 10) {
            aux = 10;
        }
        JHand += aux;
    }

    for (int i=0; i<2; i++) {
        cin>>aux;
        if(aux > 10) {
            aux = 10;
        }
        MHand += aux;
    }

    for (int i=0; i<rounds; i++) {
        cin>>aux;
        if(aux > 10) {
            aux = 10;
        }
        commons += aux;
    }

    MHand += commons;
    JHand += commons;
    int n = 23-MHand;
    int m = 23-JHand;

    if (MHand == JHand) {
        cout << 23-MHand;
    } else if (JHand == 23 || n<11 && m<11 ) {
        cout << "-1";
    } else {

        if (n<m) {
            cout << n;
        } else {
            cout << m+1;
        }

    }
    
    return 0;
}