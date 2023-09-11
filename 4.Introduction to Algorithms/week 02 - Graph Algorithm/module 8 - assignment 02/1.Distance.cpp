#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];

int BFS(int s, int d)
{
    queue<pair<int, int>> q;
    q.push({s, 0});
    visited[s] = true;
    while (!q.empty())
    {
        int u = q.front().first;
        int distance = q.front().second;
        q.pop();
        if (u == d)
        {
            return distance;
        }
        for (int v : adj[u])
        {
            if (!visited[v])
            {
                q.push({v, distance + 1});
                visited[v] = true;
            }
        }
    }
    return -1;
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

    int t;
    cin >> t;
    while (t--)
    {
        int s, d;
        cin >> s >> d;

        for (int i = 0; i < N; i++)
        {
            visited[i] = false;
        }

        cout << BFS(s, d) << endl;
    }

    return 0;
}