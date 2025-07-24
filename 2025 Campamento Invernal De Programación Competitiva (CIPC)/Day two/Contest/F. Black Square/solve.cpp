//https://codeforces.com/group/TY5qlgX1RN/contest/624645/problem/F

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a1, a2, a3, a4; // 0 ≤ ai ≤ 10**4
    cin >> a1 >> a2 >> a3 >> a4;
    string game;
    cin >> game;
    int count[4] = {0, 0, 0, 0};
    
    for (int s : game) {
        count[s-49]++;
    }
 
    cout << count[0]*a1 + count[1]*a2 + count[2]*a3 + count[3]*a4;
    
    return 0;
}