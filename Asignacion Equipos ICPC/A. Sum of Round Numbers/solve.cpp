//https://codeforces.com/gym/641483/problems

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin>>t;

    while (t--) {

        string n; cin >>n;
        queue<int> a;
        int aux = n.length()-1;
        int pedro = 0;
        for (int i=0; i<n.length(); i++) {
            if (n[i] != '0') {
                pedro = n[i] - '0';
                for (int j = 0; j < aux; j++) {
                    pedro *= 10;
                }
                a.push(pedro);
            }
            aux--;
        }
        cout << a.size() << endl;
        while (!a.empty()) {
            cout << a.front() << " ";
            a.pop();
        }
        cout << endl;
    }
    return 0;
}