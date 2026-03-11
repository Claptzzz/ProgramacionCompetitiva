//https://acm.timus.ru/problem.aspx?space=1&num=1001

#include <bits/stdc++.h>
using namespace std;

int main() {

    double aux;
    stack<double> pila;
    while(cin>>aux) {
        pila.push(aux);
    }
    while (!pila.empty()) {
        double head = pila.top();
        pila.pop();
        cout << fixed << (setprecision(4)) << sqrt(head) << endl;
    }
    return 0;
}