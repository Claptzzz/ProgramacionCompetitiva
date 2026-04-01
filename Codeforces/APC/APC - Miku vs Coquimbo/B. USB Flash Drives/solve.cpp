//https://codeforces.com/group/mWZlmOaTZR/contest/682677/problem/B

#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main() {

    int n;cin>>n;
    int m;cin>>m;
    priority_queue<int> q;

    for(int i=0; i<n;i++){
        int aux;cin>>aux;
        q.push(aux);
    }
    int total = 0;
    int cant = 0;
    while(!q.empty()) {
        int head = q.top();
        total += head;
        cant++;

        if (total>=m) {
            cout << cant << endl;
            return 0;
        }
        q.pop();
    }

    return 0;
}