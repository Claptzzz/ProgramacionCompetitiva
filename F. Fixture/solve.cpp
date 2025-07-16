//https://codeforces.com/gym/105321/problem/F

#include <iostream>
using namespace std;

int main() {

    int aux, points, actual, racha;

    cin >> aux;

    for (int i=0; i<aux; i++) {

        cin >> actual;

        if (actual == 1) {
            points++;
            racha++;
            if (racha >= 3) {
                points++;
            }
        } else {
            points--;
            racha = 0;
        }
    }

    cout << points;


    return 0;
}