//https://codeforces.com/group/TY5qlgX1RN/contest/626280/problem/J

#include <bits/stdc++.h>
using namespace std;
#include <string>

int main() {

    int t;cin>>t;

    while(t--) {

        string n;cin>>n;
        int min = -1;

        for (int i=0; i<n.length(); i++) {
            char a = n[i];
            int x = a - '0';
            if (x < min || min == -1) {
                min = x;
            }
        }
        cout << min << endl;
    }

    return 0;
}