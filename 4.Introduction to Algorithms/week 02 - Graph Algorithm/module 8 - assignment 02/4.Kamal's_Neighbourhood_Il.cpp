#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
vector<bool> visited(N);

int dfs(int u)
{
    visited[u] = true;
    int cnt = 1;

    for (int v : adj[u])
    {
        if (!visited[v])
        {
            cnt += dfs(v);
        }
    }

    return cnt;
}

int main()
{

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    int k;
    cin >> k;
    cout << dfs(k) - 1 << endl;

    return 0;
}

