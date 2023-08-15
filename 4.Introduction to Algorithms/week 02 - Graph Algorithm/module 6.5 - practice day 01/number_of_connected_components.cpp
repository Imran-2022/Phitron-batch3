#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
int level[N]; // kind of distance.

void bfs(int s)
{
    // not recursive
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty())
    {
        // pop a node from the queue .

        // unvisited neighbors of that node.

        int u = q.front();
        q.pop();
        cout<<"visiting : "<<u<<endl;
        // section 1 - a node is being processed

        for (int v : adj[u])
        {

            // section 2 - child is being processing
        
            if (visited[v] == true)
                continue;
            q.push(v);
            visited[v]=true;
            level[v]=level[u]+1;
            // section 3 - child processing



        }

        // section 4 - same as section 1
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    bfs(1);

    for(int i=1;i<=n;i++){
        cout<<"level of "<<i<<" : "<<level[i]<<endl;
    }
    
    return 0;
}