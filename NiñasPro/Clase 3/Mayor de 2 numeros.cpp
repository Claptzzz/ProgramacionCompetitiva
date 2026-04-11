#include <iostream>
using namespace std;

int main() {

    int number_uno;
    int number_dos;
    cin>>number_uno;
    cin>>number_dos;

    if (number_uno > number_dos) {
        cout << number_uno << endl;
    } else {
        cout << number_dos << endl;
    }
    
    return 0;
}