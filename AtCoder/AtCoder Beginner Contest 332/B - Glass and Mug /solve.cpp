//https://atcoder.jp/contests/abc332/tasks/abc332_b

#include <bits/stdc++.h>
using namespace std;

int main() {

    int k,g,m;cin>>k>>g>>m;

    int gl = 0;
    int mug = 0;

    for (int i=0; i<k; i++){
        if (gl == g){
            gl = 0;
        } else if(mug == 0){
            mug = m;
        } else {
            int aux = g - gl;
            if (aux < mug) {
                gl += aux;
                mug -= aux;
            } else {
                gl += mug;
                mug = 0;
            }
        }
    }
    cout << gl << " " << mug << endl;
    return 0;
}