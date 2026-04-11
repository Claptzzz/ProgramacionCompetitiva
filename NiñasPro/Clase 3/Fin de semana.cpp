#include <iostream>
using namespace std;

int main() {

    int dia;
    cin>>dia;

    if (dia == 6 || dia == 7) {
        cout << "Fin de semana" << endl;
    } else {
        cout << "Dia laboral" << endl;
    }
    
    return 0;
}