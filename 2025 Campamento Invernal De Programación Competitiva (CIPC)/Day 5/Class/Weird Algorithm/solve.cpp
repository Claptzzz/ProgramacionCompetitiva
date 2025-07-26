//https://cses.fi/problemset/task/1068

#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n; cin>>n;

    queue<long long> x;
    x.push(n);
    long long aux = 1;
    while (n != 1) {
        if (n%2 == 0) {
            n = n/2;
        } else {
            n *= 3;
            n++;
        }
        x.push(n);
        aux++;
    }
    
    while (!x.empty()) {
        cout << x.front() << " ";
        x.pop();
    }

    return 0;
}