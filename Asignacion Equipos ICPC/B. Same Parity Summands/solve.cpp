//

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main() {

    int t; cin>>t;

    while(t--) {
        ll n,k;cin>>n>>k;
        if (k==1) {
            cout << "YES" << endl;
            cout << n << endl;
        } else {
            if (n%2==0) {
                if (n == k) {
                    cout << "YES" << endl;
                    while (k--) {
                        cout << "1 ";
                    }
                    cout << endl;
                } else {
                    ll aux = 0;
                    bool pedro = false;
                    for (int i=0;i<k-1;i++) {
                        n -= 2;
                        aux++;
                        if (n<=0) {
                            pedro = true;
                            cout << "NO" << endl;
                            break;
                        }
                    }
                    if (!pedro) {
                        cout << "YES" << endl;
                        while (aux--) {
                            cout << "2 ";
                        }
                        cout << n << endl;
                    }
                } 
            } else {
                if (k%2==0) {
                    cout << "NO" << endl;
                } else {
                    if (n == k) {
                        cout << "YES" << endl;
                        while (k--) {
                            cout << "1 ";
                        }
                        cout << endl;
                    } else {
                        ll aux = 0;
                        bool pedro = false;
                        for (int i=0;i<k-1;i++) {
                            n -= 1;
                            aux++;
                            if (n<=0) {
                                pedro = true;
                                cout << "NO" << endl;
                                break;
                            }
                        }
                        if (!pedro) {
                            cout << "YES" << endl;
                            while (aux--) {
                                cout << "1 ";
                            }
                            cout << n << endl;
                        }
                    }
                }
            }
        }     
    }

    return 0;
}