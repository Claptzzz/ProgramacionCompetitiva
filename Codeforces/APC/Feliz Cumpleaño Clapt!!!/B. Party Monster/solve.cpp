//https://codeforces.com/group/mWZlmOaTZR/contest/692201/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;
    while(t--){
        int a=0;
        int b=0;
        int n;cin>>n;
        for(int i=0;i<n;i++){
            char aux;cin>>aux;
            if (aux == '(') {
                a++;
            } else {
                b++;
            }
        }
        if (a==b){
            cout<<"yes"<< endl;
        } else {
            cout <<"no"<< endl;
        }
    }

    return 0;
}