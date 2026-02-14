//https://codeforces.com/group/Pf5PtyLxbM/contest/672013/problem/J

#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;cin >> s;

    vector<string> p(5);
    for (int i=0; i<5;i++){
        cin>>p[i];
    }
    sort(p.begin(), p.end());

    bool soborno = false;

    do {
        string f = p[0] + p[1] + p[2] + p[3] + p[4];

        if (s.find(f) != string::npos) {
            soborno = true;
            break;
        }

    } while (next_permutation(p.begin(), p.end()));

    if (soborno) {
        cout << "Nooo, la polizzia" << endl;
    } else {
        cout << "Sargento Camelas, Gracias!" << endl;
    }
    return 0;
}