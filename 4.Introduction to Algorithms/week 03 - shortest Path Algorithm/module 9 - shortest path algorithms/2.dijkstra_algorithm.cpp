#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

const int N = 1e3 + 5;
vector<pii> adj[N];
const int INF = 1e9 + 10;
vector<int> dist(N, INF);
vector<bool> visited(N);

void dijkstra(int source)
{
    // priority_queue<int>, it's the same as priority_queue<int, vector<int>>.
    
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    //  compare function pair ar first element neya kj kore, na parle second. 

    dist[source] = 0;
    pq.push({dist[source], source});

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        visited[u] = true;  

        for (pii vpair : adj[u])
        {
            int v = vpair.first;
            int w = vpair.second;
            if (visited[v])
                continue;
            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main()
{

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    dijkstra(1);

    for (int i = 1; i <= n; i++)
    {
        cout << "distance of node : " << i << " : ";
        cout << dist[i] << endl;
    }

    return 0;
}

/*

input:

7
8
1 2 3
1 3 5
3 4 1
4 6 1
2 5 6
5 6 1
5 7 2
3 7 12

output:

distance of node : 1 : 0
distance of node : 2 : 3
distance of node : 3 : 5
distance of node : 4 : 6
distance of node : 5 : 8
distance of node : 6 : 7
distance of node : 7 : 10


*/