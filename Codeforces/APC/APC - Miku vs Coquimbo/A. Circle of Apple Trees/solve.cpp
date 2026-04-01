//https://codeforces.com/group/mWZlmOaTZR/contest/682677/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;
    while(t--){

        int n;cin>>n;
        priority_queue<int> q;

        for(int i=0; i<n; i++){
            int aux;cin>>aux;
            q.push(aux);
        }
        int cant = 1;
        int ant = q.top();
        q.pop();
        while(!q.empty()) {
            int head = q.top();
            if (head<ant) {
                cant++;
            }
            ant = head;
            q.pop();
        }
        cout << cant << endl;


    }

    return 0;
}