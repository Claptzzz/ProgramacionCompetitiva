#include <iostream>
using namespace std;

int main() {

    int number;
    cin>>number;
    if(number == 0) {
        cout << "Cero" << endl;
    } else {
        if (number > 0) {
            cout << "Positivo" << endl;
        } else {
            cout << "Negativo" << endl;
        }
    }
    
    return 0;
}