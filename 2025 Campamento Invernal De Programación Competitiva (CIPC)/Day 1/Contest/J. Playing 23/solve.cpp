//https://codeforces.com/group/TY5qlgX1RN/contest/624447/problem/J

#include <bits/stdc++.h>
using namespace std;

int main() {

    int rounds; cin>>rounds;

    int JHand = 0, MHand = 0, aux, commons = 0;

    vector<int> baraja = {4,4,4,4,4,4,4,4,4,4,4,4,4};

    for (int i=0; i<2; i++) {
        cin>>aux;
        baraja[aux-1]--;
        if(aux > 10) {
            aux = 10;
        }
        JHand += aux;
    }

    for (int i=0; i<2; i++) {
        cin>>aux;
        baraja[aux-1]--;
        if(aux > 10) {
            aux = 10;
        }
        MHand += aux;
    }

    for (int i=0; i<rounds; i++) {
        cin>>aux;
        baraja[aux-1]--;
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
        if (baraja[n-1] != 0) {
            cout << n;
        } else {
            cout << "-1";
        }
    } else if (JHand == 23) {
        cout << "-1";
    } else if (n>10 && m>10) {
        cout << "-1";
    } else {
        if (n<m) {
            if (baraja[n-1] != 0) {
                cout << n;
            }
        } else {
            if (baraja[m] != 0) {
                cout << m+1;
            } else {
                for (int i=0;i<13;i++) {
                     if (MHand + i > 23) {
                        cout << "-1";
                        break;
                    }
                    if (baraja[i] != 0 && JHand+i > 23) {
                        cout << i+1;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}