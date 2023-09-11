#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<vector<int>> adj(N);

int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int k;
    cin >> k;

    cout << adj[k].size() << endl;

    return 0;
}