//https://codeforces.com/group/mWZlmOaTZR/contest/681114/problem/C

#include <bits/stdc++.h>
#include <queue>
using namespace std;


int main() {

    int t;cin>>t;

    while(t--) {
        int coins = 0;
        int mult = 2;
        int n,c;cin>>n>>c;
        priority_queue<int> q;
        priority_queue<int> mayores;
        while(n--){
            int aux;cin>>aux;
            if (aux > c) mayores.push(aux);
            else q.push(aux);
        }
        int head = q.top();
        if (head > c) {
            coins++;
        }
        q.pop();
        while(!q.empty()){
            int head = q.top();
            head *= mult;
            mult += 2;
            if (head > c) {
                coins++;
            }
            q.pop();
        }
        while(!mayores.empty()) {
            int head = mayores.top();
            head *= mult;
            mult += 2;
            if (head > c) {
                coins++;
            }
            mayores.pop();
        }
        cout << coins << endl;
    }

    return 0;
}