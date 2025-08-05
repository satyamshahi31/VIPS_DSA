#include <bits/stdc++.h>
using namespace std;

// DFS function
void dfs(int node, vector<int> adj[], vector<int> &visited) {
    visited[node] = 1;           
    cout << node << " ";         

    for (auto it : adj[node]) {
        if (!visited[it]) {
            dfs(it, adj, visited); 
        }
    }
}

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<int> adj[V];          

    cout << "Enter edges (u v):" << endl;
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);     
    }
    vector<int> visited(V, 0);

    int start;
    cout << "Enter starting node for DFS: ";
    cin >> start;

    cout << "DFS Traversal starting from node " << start << ": ";
    dfs(start, adj, visited);
    cout << endl;

    return 0;
}
