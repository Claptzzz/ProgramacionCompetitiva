
//https://codeforces.com/group/TY5qlgX1RN/contest/624902/problem/J
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) { //test cases
        int steps = 0;
        int max_even = 0;
        long long int max_odd = 0;
        vector<int> even;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x%2 == 0) {
                even.push_back(x);
                if (x > max_even) {
                    max_even = x;
                }
            } else {
                if (x > max_odd) max_odd = x;
            }
        }
        if (even.size() == n or even.size() == 0) {
            steps = 0;
            // cout << 0 << endl;
        } else if (max_even < max_odd) {
            steps = even.size();
            // cout << even.size() << endl;
        } else {
            steps = even.size();
            sort(even.begin(), even.end());
            for (int i = 0; i < even.size(); i++) {
                if (even[i] < max_odd) {
                    max_odd += even[i];
                } else {
                    steps++;
                    break;
                }
            }
        }
        cout << steps << endl;
        cout << endl;
    }
    return 0;
}
