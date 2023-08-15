#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];

void dfs(int u)
{
    // section 1
    // actions just after entering a node.
    visited[u]=true;
    cout<<"visition node : "<<u<<endl;
    for (int v : adj[u]) //u theke jader kache jaoa jy.
    {
        // section 2
        // action before entering a new neighbor/child;
        if(visited[v])continue;
        dfs(v);
        // section 3
        // actions after exiting a neighbor.
    }

    // section 4
    // actions before exiting node u
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

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "Node " << i << " :";
    //     for (int j : adj[i])
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    dfs(1);

    return 0;
}


/**
input -

10 
9
1 2
1 3
1 10
2 4
3 5
3 6
4 7
4 8
6 9


9
10
1 2
2 3
3 8
1 5
5 4
4 7
6 7
7 8
8 9

output - 

visition node : 1
visition node : 2
visition node : 4
visition node : 7
visition node : 8
visition node : 3
visition node : 5
visition node : 6
visition node : 9
visition node : 10


visition node : 1
visition node : 2
visition node : 3
visition node : 8
visition node : 7
visition node : 4
visition node : 5
visition node : 6
visition node : 9


*/