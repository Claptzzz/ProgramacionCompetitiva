//https://codeforces.com/group/TY5qlgX1RN/contest/624902/problem/E

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;

    long long n,s,m;cin>>n>>s>>m;
    long long aux = 0;
    bool auxb = false;
    vector<string> answer(t);
    long long auxt=0;
    
    long long start, finish, j;


    while (t > 0) {

        vector<bool> day(m+1, true);
        for (int i=0; i<n; i++) {
            cin>>start>>finish;
            for (j=start;j<=finish;j++) {
                day[j] = false;
            }
        }
        for (int i=0; i<m+1;i++) {
            if (day[i] == true) {
                aux++;
            } else {
                aux = 0;
            }
            if (aux >= s) {
                answer[auxt] = "YES";
                auxb = true;
                break;
            }
        }
        if (!auxb) answer[auxt] = "NO";
        t--;
        auxt++;
    }

    for (int i=0; i<auxt; i++) {
        cout << answer[i] << endl;
    }

    return 0;
}