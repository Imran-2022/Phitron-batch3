#include <bits/stdc++.h>
using namespace std;


const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (visited[v] == true)
                continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
        }
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
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(0);
    int k;
    cin >> k;
    if (k == 0)
    {
        cout << "0" << endl;
        return 0;
    }
    map<int, vector<int>> mp;
    for (int i = 1; i < N; i++)
    {
        if (level[i] == k)
        {
            mp[level[i]].push_back(i);
        }
    }
    if (!mp[k].empty())
    {
        for (int x : mp[k])
        {
            cout << x << " ";
        }
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}