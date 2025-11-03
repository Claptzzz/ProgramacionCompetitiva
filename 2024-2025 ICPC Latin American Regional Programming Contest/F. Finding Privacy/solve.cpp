//https://codeforces.com/gym/105505/problem/F

#include <bits/stdc++.h>
using namespace std;

int main() {

    int k,n; cin>>k>>n;

    int difMax = 1+k*2;
    int difMin = k-1;
    int dif = n-k;
    if (dif < 0) {
        dif *= -1;
    }
    if (dif < difMin) {
        cout << "*";
        return 0;
    } else if (dif >= difMax) {
        cout << "*";
        return 0;
    } else {
        if (difMax-dif == 1) {
            cout << "-";
            n--;
            while (n != 2) {
                cout << "X--";
                n -= 3; 
            }
            cout << "X-";
        } else {
            
            while (dif > difMin && n>3) {
                cout << "X" << "--";
                dif--;
                k--;
                n -= 3;
            }
            while (n > 0 ) {
                if (n>0 && k>0) {
                    cout << "X";
                    k--;
                    n--;
                }
                if (n>0) {
                    cout << "-";
                    n--;
                }
            } 
        }
    }

    return 0;
}