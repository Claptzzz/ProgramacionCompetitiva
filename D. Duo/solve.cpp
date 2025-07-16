//https://codeforces.com/gym/105321/problem/D

#include <iostream>
using namespace std;

void printNo() {
    cout << "N";
}

void printSi() {
    cout << "S";
}

int main() {

    int a, b, c;

    cin >> a >> b >> c;

    if (a==b && b==c) { 
        printNo();
    } else if (a>b && a>c) {
        int sum1 = b+c;
        if (sum1 > a) {
            printNo();
        } else {
            printSi();
        }

    } else if (b>a && b>c) {
        int sum1 = a+c;
        if (sum1 > b) {
            printNo();
        } else {
            printSi();
        }

    } else {
        int sum1 = a+b;
        if (sum1 > c) {
            printNo();
        } else {
            printSi();
        }

    }

    return 0;
}