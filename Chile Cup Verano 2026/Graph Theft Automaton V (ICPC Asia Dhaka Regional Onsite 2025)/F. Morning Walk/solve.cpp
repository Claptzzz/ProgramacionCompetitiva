//https://codeforces.com/group/Pf5PtyLxbM/contest/669742/problem/F

#include <bits/stdc++.h>
using namespace std;

int main() {

    int k;cin>>k;

    while(k--) {
        int L,v0,T,N;cin>>L>>v0>>T>>N;
        bool ant = false;
        while(N--) {
            if (ant) {
                cout << " ";
            }
            int t1,v1;cin>>t1>>v1;
            int tiempoR = T-t1;
            int meetings = tiempoR/((double)L/abs(v0-v1));
            meetings++;
            cout << meetings;
            ant = true;
        }
        cout << endl;
    }

    return 0;
}