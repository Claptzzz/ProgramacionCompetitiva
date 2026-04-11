#include <iostream>
using namespace std;

int main() {

    int numero_uno;
    int numero_dos;
    int numero_tres;
    cin >> numero_uno;
    cin >> numero_dos;
    cin >> numero_tres;

    if (numero_uno >= numero_dos && numero_uno >= numero_tres) {
        cout << numero_uno << endl;
    } else {
        if (numero_dos >= numero_uno && numero_dos >= numero_tres) {
            cout << numero_dos << endl;
        } else {
            cout << numero_tres << endl;
        }
    }
    
    return 0;
}