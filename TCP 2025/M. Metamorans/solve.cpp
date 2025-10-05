//https://codeforces.com/gym/640342/attachments
//PDF
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,m,k;cin>>n>>m>>k;

    n *= 2;
    m *= 2;
    bool min = false, max = false;
    if (n>=k) min = true;
    if (m>=k) max = true;

    if (min==max) {
        cout << "SI" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}