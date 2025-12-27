//https://cses.fi/problemset/task/1755

#include <bits/stdc++.h>
using namespace std;

int main() {

    string n;cin>>n;

    if (n.length() == 1) {
        cout << n;
        return 0;
    }

    bool par = false;
    if (n.length()%2==0) par = true;
    priority_queue<char> a;
    stack<char> antes;
    queue<char> despues;
    for (int i=0; i<n.length(); i++) {
        a.push(n[i]);
    }

    char anterior = 'a';
    int cant = 0;
    int i = 0;
    bool unico = false;
    char medio = 'a';
    while (!a.empty()) {
        if (i == 0) {
            antes.push(a.top());
            i++;
            anterior = a.top();
            a.pop();
        } else {
            if (anterior == a.top()) {
                if (i%2 == 0) {
                    antes.push(a.top());
                    i++;
                    anterior = a.top();
                    a.pop();
                } else {
                    despues.push(a.top());
                    i++;
                    anterior = a.top();
                    a.pop();
                }
            } else {
                if (i%2!=0) {
                    if (!par && !unico) {
                        unico = true;
                        antes.pop();
                        medio = anterior;
                        i = 2;
                    } else {
                        cout << "NO SOLUTION" << endl;
                        return 0;
                    }
                } else {
                    i = 1;
                    antes.push(a.top());
                    anterior = a.top();
                    a.pop();
                }
            }
        }
    }
    
    bool aux = false;
    if (!par && !unico) {
        medio = anterior;
        aux = true;
    }

    bool quitado = false;
    while (!antes.empty()) {
        if (aux && !quitado) {
            quitado = true;
            antes.pop();
        }
        cout << antes.top();
        antes.pop();
    }
    if (!par) {
        cout << medio;
    }
    while (!despues.empty()) {
        cout << despues.front();
        despues.pop();
    }
    return 0;
}