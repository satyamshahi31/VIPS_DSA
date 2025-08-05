#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<int> adj[], int V) {
    vector<int> visited(V, 0);   
    queue<int> q;
    visited[start] = 1;        
    q.push(start);

    cout << "BFS Traversal starting from node " << start << ": ";

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (auto it : adj[node]) {
            if (!visited[it]) {
                visited[it] = 1;
                q.push(it);
            }
        }
    }
    cout << endl;
}

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    // Create adjacency list
    vector<int> adj[V];

    cout << "Enter edges (u v):" << endl;
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    int start;
    cout << "Enter starting node for BFS: ";
    cin >> start;

    bfs(start, adj, V);

    return 0;
}
