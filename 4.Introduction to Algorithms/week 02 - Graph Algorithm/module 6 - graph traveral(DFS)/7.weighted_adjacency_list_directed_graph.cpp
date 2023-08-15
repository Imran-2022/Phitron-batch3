#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<pair<int, int>> adj[N];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});

        // or, adj[u].push_back(make_pair(v,w));
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "List " << i << " : ";
        for (auto x : adj[i])
        {
            cout << "(" << x.first << " " << x.second << ")"
                 << " , ";
        }
        cout << endl;
    }

    return 0;
}
/*
input -

4
5
1 2 8
1 3 9
2 4 11
4 3 15
3 2 17

output -

List 1 : 2(8) 3(9)
List 2 : 4(11)
List 3 : 2(17)
List 4 : 3(15)




*/