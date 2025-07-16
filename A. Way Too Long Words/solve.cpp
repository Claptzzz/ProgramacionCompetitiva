//https://codeforces.com/contest/71/problem/A

#include <iostream>
using namespace std;

int main() {

    int aux;

    cin>>aux;

    for (int i = 0; i < aux; i++) {
        string s;
        cin >> s;

        int n = s.length();

        if (s.length() > 10) {
            cout << s[0] << n - 2 << s[n-1] << endl;
        } else {
            cout << s << endl;
        }
    }

    return 0;
}