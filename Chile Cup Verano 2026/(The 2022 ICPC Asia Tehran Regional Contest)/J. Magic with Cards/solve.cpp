//https://codeforces.com/group/Pf5PtyLxbM/contest/673760/problem/J

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, i, j;cin>>n>>i>>j;
    int s = i - 1;
    int t = j - 1;
    int max_nodes = 2 * n;

    vector<int> dist(max_nodes, -1);
    queue<int> q;

    q.push(s);
    dist[s] = 0;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        if (curr == t) {
            cout << dist[curr] << endl;
            return 0;
        }

        int ns;
        if (curr % 2 == 0) {
            ns = curr + 1;
        } else {
            ns = curr - 1;
        }

        if (dist[ns] == -1) {
            dist[ns] = dist[curr] + 1;
            q.push(ns);
        }

        int nr;
        if (curr < n) {
            nr = 2 * curr;
        } else {
            nr = 2 * (curr - n) + 1;
        }

        if (dist[nr] == -1) {
            dist[nr] = dist[curr] + 1;
            q.push(nr);
        }
    }

    cout << -1 << endl;
    return 0;
}