#include <iostream>
using namespace std;

int main() {

    int temp;
    cin >> temp;
    if (temp <= 25 && temp >= 10) {
        cout << "Agradable" << endl;
    } else {
        if (temp < 10) {
            cout << "Frío" << endl;
        } else {
            cout << "Calor" << endl;
        }
    }
    
    return 0;
}