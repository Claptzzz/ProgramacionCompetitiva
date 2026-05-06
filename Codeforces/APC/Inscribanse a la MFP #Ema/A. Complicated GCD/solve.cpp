#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
bool comprobar(string, string);
 
int main() {
 
    string x,y;
 
    cin >> x >>y;
 
    bool aux = comprobar(x,y);
 
    if (aux==true) {cout<<x<<endl;}
    else {
        cout<<1<<endl;
    }
 
    return 0;
}
 
bool comprobar(string x, string y) {
    if (x==y) {return true;}
    else {
        return false;
    }
}