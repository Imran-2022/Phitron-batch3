#include <bits/stdc++.h>
using namespace std;

void bfs(int root, vector<int> adj[], vector<int> &level) {
    queue<int> q;
    vector<bool> visited(level.size(), false);

    q.push(root);
    level[root] = 0; // Level of root is 0
    visited[root] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                level[neighbor] = level[node] + 1; // Level of neighbor
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int n; // number of nodes
    cin >> n;

    vector<int> adj[n + 1]; // adjacency list
    for (int i = 0; i < n - 1; i++) { // for tree input, n-1 edges
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> level(n + 1, -1); // store levels, initialized to -1

    int root = 1; // assuming 1 as the root
    bfs(root, adj, level);

    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << " is at level " << level[i] << endl;
    }

    return 0;
}
