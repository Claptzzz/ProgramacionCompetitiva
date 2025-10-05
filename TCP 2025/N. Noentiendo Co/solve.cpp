//https://codeforces.com/gym/640342/attachments
//PDF

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;cin>>n;
    bool A = false;
    bool T = false;
    char aux;
    for (int i=0; i<n; i++) {
        cin >> aux; 
        if (aux == 'A') A = true;
        if (aux == 'T') T = true;

        if (A || T) {
            for (int j=i; j<n; j++) {
                cin >> aux;
                if (aux == 'T') {
                    cout << "ganaste" << endl;
                    return 0;
                } else if (aux == 'A') {
                    cout << "ganaste" << endl;
                    return 0;
                } else if (aux == '#') {
                    cout << "perdiste" << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}