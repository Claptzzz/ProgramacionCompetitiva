//https://cses.fi/problemset/task/1618

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

ll MOD = 1e9 + 7;

int main() {

    int n;cin>>n;

    ll cant = 0;

    /*la idea es dividir el numero en multiplos de 5, por ejemplo si es 100 es
    100/5 = 20, despues i se multiplica por 5 y pasa a 100/25 = 4, se suma 
    20 + 4 y dan los 24, sirve para numeros extremadamentes grandes que no 
    se podian calcular de manera iterativa :'v*/
    for (int i = 5; n / i >= 1; i *= 5)
        cant += n / i;

    cout << cant << endl;

    return 0;
}