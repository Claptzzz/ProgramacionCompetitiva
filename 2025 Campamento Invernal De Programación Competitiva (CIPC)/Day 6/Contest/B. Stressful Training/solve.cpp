//https://codeforces.com/group/TY5qlgX1RN/contest/625831/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

void rellenar(vector<pair<ll,ll>>& x) {
    for (int i = 0; i<x.size(); i++) {
        ll a;cin>>a;
        x[i].first = a;
    }
    for (int i = 0; i<x.size(); i++) {
        ll a;cin>>a;
        x[i].second = a;
    }
}

ll recursive(int i, vector<pair<ll,ll>> x, int c, int m) {

    x[i].first += c;
    for (int i=0; i<x.size();i++) {
        x[i].first -= x[i].second;
    }
    m--;

    int indexMD = 0;
    int cantP = 0;
    ll difMin = 0;
    ll difx = 0;
    ll dif = 0;
    int cant = c;
    
    while (m--) {
        
    for (int i=0;i<x.size();i++) {
        ll b = x[i].first;
        ll d = x[i].second;

        dif = b-d;

        if (dif < 0) {
            cantP++;
            indexMD = i;
            difMin = d;
        } else if(difx < difMin || difMin == 0) {
            difMin = d;
        }
    }
    if (cantP > 1) {
        cant = recursive(indexMD, x, c+1, m);
     //   return cant;
    } else if (dif < 0) {
        cant = recursive(indexMD, x, c+1, m);
      //  return cant;
        
        } else {
        x[indexMD].first += c;
        for (int i=0; i<x.size();i++) {
        x[i].first -= x[i].second;
        }
    }
    }
    return cant;
}

int main() {

    int s,m;cin>>s>>m;

    vector<pair<ll,ll>> array(s);
    rellenar(array);

    int indexMD = 0;
    int cantP = 0;
    ll difMin = 0;
    ll difx = 0;

    for (int i=0;i<s;i++) {
        ll b = array[i].first;
        ll d = array[i].second;

        ll dif = b-d;

        if (dif < 0) {
            cantP++;
            indexMD = i;
            difMin = d;
        } else if(difx < difMin || difMin == 0) {
            difMin = d;
        }
    }
    if (cantP > 1) {
        cout << "-1";
    } else {
        int cant = recursive(indexMD, array, 1, m);
        cout << cant;
    }

    return 0;
}