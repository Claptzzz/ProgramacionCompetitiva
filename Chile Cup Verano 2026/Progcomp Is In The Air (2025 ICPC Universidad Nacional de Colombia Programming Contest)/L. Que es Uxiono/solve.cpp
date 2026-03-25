// https://codeforces.com/group/Pf5PtyLxbM/contest/672013/problem/L

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

  int t;
  cin >> t;

  while (t--) {
    int minutes;
    cin >> minutes;
    if (minutes%2 != 0) {
      minutes++;
        cout << (int)(pow(2, minutes/2 + 1) - 2) << endl;
      } else {
        cout << (int)(pow(2, minutes/2 + 1) - 2 + pow(2, minutes/2)) << endl;
      }
  }
  return 0;
}