#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
vector<int> vt[N];

int adjMatrix[N][N];

int main()
{
    int n;
    cin >> n;
    int t;
    cin >> t;
    while (t--)
    {
        int u, v;
        cin >> u >> v;
        vt[u - 1].push_back(v - 1);
    }
    for (int i = 0; i < n; i++)
    {
        // cout << "List " << i + 1 << ": ";
        for (int x : vt[i])
        {
            // cout << x + 1 << " ";
            adjMatrix[i][x] = 1;
        }
        // cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
