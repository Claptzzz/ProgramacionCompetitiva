//https://acm.timus.ru/problem.aspx?space=1&num=1877

#include <bits/stdc++.h>
using namespace std;

int main() {

    int primero, segundo;cin>>primero>>segundo;
    int diff = abs(primero-segundo);

    if (primero > segundo && segundo != 0 && diff == 1) {
        cout << "yes" << endl;
        return 0;
    } else if (primero < segundo && diff == 1) {
        cout << "yes" << endl;
        return 0;
    }
    cout << "no" << endl;
    return 0;
}