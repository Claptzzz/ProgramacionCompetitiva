//

#include <bits/stdc++.h>
using namespace std;

int main() {

    char h1,h2,juan,m1,m2;cin>>h1>>h2>>juan>>m1>>m2;
    int x,y;cin>>x>>y;

    bool h2R = false;
    bool m1R = false;
    bool m2R = false;

    char rh2 = h2;
    char rm1 = m1;
    char rm2 = m2;

    if(h2 == '0') {
        rh2 = '8';
        h2R = true;
    } else if (h2 == '1') {
        rh2 = '7';
        h2R = true;
    } else if (h2 == '3') {
        rh2 = '9';
        h2R = true;
    } else if (h2 == '5') {
        rh2 = '6';
        h2R = true;
    } else if (h2 == '6') {
        rh2 = '5';
        h2R = true;
    } else if (h2 == '7') {
        rh2 = '1';
        h2R = true;
    } else if (h2 == '8') {
        rh2 = '9';
        h2R = true;
    } else if (h2 == '9') {
        rh2 = '8';
        h2R = true;
    }

    if (m1 == '0') {
        rm1 = '8';
        m1R = true;
    } else if (m1 == '1') {
        rm1 = '7';
        m1R = true;
    } else if (m1 == '3') {
        rm1 = '9';
        m1R = true;
    } else if (m1 == '5') {
        rm1 = '6';
        m1R = true;
    } else if (m1 == '6') {
        rm1 = '5';
        m1R = true;
    }

    if(m2 == '0') {
        rm2 = '8';
        m2R = true;
    } else if (m2 == '1') {
        rm2 = '7';
        m2R = true;
    } else if (m2 == '3') {
        rm2 = '9';
        m2R = true;
    } else if (m2 == '5') {
        rm2 = '6';
        m2R = true;
    } else if (m2 == '6') {
        rm2 = '5';
        m2R = true;
    } else if (m2 == '7') {
        rm2 = '1';
        m2R = true;
    } else if (m2 == '8') {
        rm2 = '9';
        m2R = true;
    } else if (m2 == '9') {
        rm2 = '8';
        m2R = true;
    }

    if (!h2R && !m1R && !m2R) {
        cout << "No closest valid time possible" << endl;
    } else {
        if (x < y) {
            if (h2R) {
                cout << h1 << rh2 << ":" << m1 << m2 << endl;
            } else if (m1R && !m2R) {
                cout << h1 << h2 << ":" << rm1 << m2 << endl;
            } else {
                cout << h1 << h2 << ":" << m1 << rm2 << endl;
            }
        } else {
            if (m2R) {
                cout << h1 << h2 << ":" << m1 << rm2 << endl;
            } else if (m1R) {
                cout << h1 << h2 << ":" << rm1 << m2 << endl;
            } else {
                cout << h1 << rh2 << ":" << m1 << m2 << endl;
            }
        }
    }


    return 0;
}