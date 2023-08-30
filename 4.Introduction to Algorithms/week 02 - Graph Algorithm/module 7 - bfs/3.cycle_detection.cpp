#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];

bool dfs(int u, int p = -1)
{
    bool cycleExist = false;
    visited[u] = true;
    for (int v : adj[u])
    {
        if (v == p)
            continue;
        if (visited[v])
            return true;
        cycleExist = cycleExist | dfs(v, u);
    }

    return cycleExist;
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
        adj[v].push_back(u);
    }

    // if (dfs(1))
    // {
    //     cout << "cycle detected";
    // }
    // else
    // {
    //     cout << "No cycle detected";
    // }

    //  jodi muliple connected component thake ?

    bool isCycle = false;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        isCycle |= dfs(i);
    }

    if (isCycle)
    {
        cout << "cycle detected";
    }
    else
    {
        cout << "No cycle detected";
    }

    return 0;
}

/*

input:-

(2 connected component , second have cycle.)

8
7
1 2
2 3
3 5
2 4
6 7
6 8
7 8


output:-

cycle detected

*/