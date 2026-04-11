#include <iostream>
using namespace std;

int main() {

    int edad;
    cin >> edad;
    if (edad <= 19 && edad >= 13) {
        cout << "Adolescente" << endl;
    } else {
        cout << "No adolescente" << endl;
    }
    
    return 0;
}