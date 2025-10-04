//https://codeforces.com/gym/105505/problem/F

#include <bits/stdc++.h>
using namespace std;

int main() {

    int k,n; cin>>k>>n;

    if (n-k < 2) {
        cout << "*";
        return 0;
    } else if (n-k > 3) {
        cout << "*";
        return 0;
    } else {
        bool max = true;
        int x = n;
        while (max) {
            cout << "X"; 
            k--; 
            x--; 
            if (k == 0) break;
            if (x / k <= 2) {
                !max;
                break;
            }
            if (x > 1) {
                cout << "--";
                x -= 2;
            } else if (x == 1) {
                cout << "-";
                x--;
            }
        }
        if (x > 0) cout << "-"; x--;
        while (x > 0) {
            cout << "X";
            x--;
            if (x>0) cout << "-"; x--;
        }
    }

    return 0;
}