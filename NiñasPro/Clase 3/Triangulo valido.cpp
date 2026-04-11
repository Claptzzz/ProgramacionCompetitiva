#include <iostream>
using namespace std;

int main() {
    
    int lado_uno;
    int lado_dos;
    int lado_tres;
    cin >> lado_uno;
    cin >> lado_dos;
    cin >> lado_tres;
    
    if (lado_uno < lado_dos + lado_tres && lado_dos < lado_uno + lado_tres && lado_tres < lado_uno + lado_dos) {
        cout << "Válido" << endl;
    } else {
        cout << "No válido" << endl;
    }

    return 0;
}