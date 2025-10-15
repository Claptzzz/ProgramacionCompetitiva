//https://atcoder.jp/contests/abc146/tasks/abc146_b

#include <bits/stdc++.h>
using namespace std;

int main() {

    int a;cin>>a;
    string pedro;cin>>pedro;

    for (int i=0; i<pedro.length(); i++) {
        pedro[i] = (pedro[i] - 'A' + a)%26 + 'A';
    }
    
    cout << pedro << endl;

    return 0;
}