//https://codeforces.com/contest/4/problem/A

#include <iostream>
using namespace std;

int main() {

    int peso;

    cin >> peso;

    if (peso % 2 != 0 || peso == 1 || peso == 2) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}