//https://codeforces.com/gym/105505/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {

    priority_queue<char> remi;

    string cata;cin>>cata;
    for (int i=0; i<cata.length(); i++) {
        remi.push(cata[i]);
    }

    int branco = 0;
    char ant;
    bool primero = true;

    while (!remi.empty()) {
        if (primero) {
            ant = remi.top();
            remi.pop();
            primero = false;
        }
        if (remi.top() == ant && !primero) {
            branco++;
        }
        if (!primero) {
            ant = remi.top();
            remi.pop(); 
        }
    }
    cout << branco << endl;
    return 0;
}