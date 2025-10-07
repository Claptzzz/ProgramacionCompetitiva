//https://codeforces.com/gym/640342/attachments
//PDF
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main() {

    const ll mod = 1e9 + 7;

    ll n,k;cin>>n>>k;
    priority_queue<ll, vector<ll>, greater<ll> > a;
    ll juan;
    for(int i=0; i<n;i++) {
        cin >> juan;
        a.push(juan);
    }
    ll menor;
    ll diego;
    ll dif;
    while (k!=0) {
        menor = a.top();
        a.pop();
        diego = a.top();
        dif = diego - menor;
        if (diego == menor) {
            a.pop();
            ll andres = a.top();
            ll chimuelo = andres - diego;
            if (chimuelo > k) {
                if (k%2==0) {
                    diego += k/2;
                    menor += k/2;
                    k = 0;
                } else {
                    diego += k/2;
                    menor += (k/2) + 1;
                    k = 0;
                }
            } else {
                if (chimuelo%2 == 0) {
                    diego += chimuelo/2;
                    menor += chimuelo/2;
                    k -= chimuelo;
                } else {
                    diego += chimuelo/2;
                    menor += (chimuelo/2) + 1;
                    k -= chimuelo;
                }
            }
            a.push(diego);
        } else if (dif < k) {
            menor += dif;
            k -= dif;
        } else {
            menor += k;
            k = 0;
        }
        a.push(menor);
    }
    ll aux = 1;
    ll pedro = 1;
    for(int i=0; i<n;i++) {
        aux = a.top();
        pedro = (aux*pedro) %mod;
        a.pop();
    }
    cout << pedro << endl;
    return 0;
}