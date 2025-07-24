//https://codeforces.com/group/TY5qlgX1RN/contest/624645/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    string F;
    cin >> F;
 
    int count = 1, max = 0;
 
    for (int t = 1; t < F.length(); t++) {
        while (F[t-1] == F[t]) {
            count++;
            t++;
        }
        if (count > max) max = count;
        count = 1;
    }
 
    if (max < 7) cout << "NO"; else cout << "YES";
 
    return 0;
}
 