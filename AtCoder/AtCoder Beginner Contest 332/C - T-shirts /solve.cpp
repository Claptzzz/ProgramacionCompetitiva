//http://atcoder.jp/contests/abc332/tasks/abc332_c

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,m;cin>>n>>m;
    string s;cin>>s;
    int ms = 0;
    int w = m;
    int ws = 0;
    int buy = 0;

    for (int i=0; i<s.length(); i++){
        char head = s[i];
        if (head == '0'){
            w=m;
            ws = ms;
        } else if (head == '1') {
            if (w>0){
                w--;
            } else if (ws >0) {
                ws--;
            } else {
                buy++;
                ms++;
            }
        } else {
            if (ws > 0) {
                ws--;
            } else {
                buy++;
                ms++;
            }
        }
    }

    cout << buy << endl;

    return 0;
}