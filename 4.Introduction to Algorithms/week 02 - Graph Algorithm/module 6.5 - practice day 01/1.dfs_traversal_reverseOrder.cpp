#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];    // array of vector that's it.
bool visited[N];

void dfs(int u)
{
    visited[u]=true;
    // cout<<u<<" "; 
    // just write this line after recursion. 
    for (int v : adj[u]) 
    {
        if(visited[v])continue;
        dfs(v);
    }
    cout<<u<<" ";
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

    dfs(1);

    return 0;
}


/**

input -

4 
4
1 2
4 3
3 2
2 4

output - 
4 3 2 1 


*/