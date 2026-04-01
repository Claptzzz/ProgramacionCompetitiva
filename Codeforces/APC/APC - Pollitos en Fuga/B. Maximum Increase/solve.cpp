//https://codeforces.com/group/mWZlmOaTZR/contest/681114/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;
    int cont = 1;
    int anterior;
    int maxCont = 0;
    for(int i=0; i<t;i++) {
        int actual;cin>>actual;
        if(i==0){
            anterior = actual;
        } else {
            if(anterior < actual) {
                cont++;
            } else {
                if (cont > maxCont) {
                    maxCont = cont;
                }
                cont = 1;
            }
            anterior = actual;
        }
    }
    if (cont > maxCont) {
        maxCont = cont;
    }
    cout << maxCont << endl;

    return 0;
}