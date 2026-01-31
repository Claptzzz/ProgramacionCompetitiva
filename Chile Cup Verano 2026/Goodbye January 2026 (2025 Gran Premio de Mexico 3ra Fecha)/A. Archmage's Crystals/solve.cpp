//https://codeforces.com/group/Pf5PtyLxbM/contest/668427/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    long long sum = 0;

    for(int i=0; i<n; i++) {
        int a; cin >> a;
        sum += a;
    }

    int curr = n;
    bool not_div = true;
    while(curr > 1 && not_div) {
        if(sum % curr != 0) {
            curr--;
        } else {
            not_div = false;
        }
    }

    cout << n - curr << endl;
    return 0;
}