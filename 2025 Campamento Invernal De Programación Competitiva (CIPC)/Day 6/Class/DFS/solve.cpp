// C++ program to perform Iterative 
// Depth First Traversal of Graph
#include <bits/stdc++.h>
using namespace std;

vector<int> dfs(vector<vector<int>>& adj) {
    int n = adj.size();
    
    vector<bool> visited(n, false);
    vector<int> res;
    
    // Start DFS from node 0.
    stack<int> st;
    st.push(0);
    
    while (!st.empty()) {
        int node = st.top();
        st.pop();
        
        // If node is already visited, continue
        if (visited[node] == true) {
            continue;
        }
        
        // Mark this node as visited 
        visited[node] = true;
        res.push_back(node);
        
        // Traverse all edges (as stack is used, so 
        // push from right to left)
        int size = adj[node].size();
        for (int i=size-1; i>=0; i--) {
            int v = adj[node][i];
            if (!visited[v]) st.push(v);
        }
    }
    
    return res;
}

int main() {
    vector<vector<int>> adj = 
    {{1, 2}, {2}, {0, 3}, {3}};
    vector<int> res = dfs(adj);
    for (auto node: res) cout << node << " ";
    cout << endl;

    return 0;
}