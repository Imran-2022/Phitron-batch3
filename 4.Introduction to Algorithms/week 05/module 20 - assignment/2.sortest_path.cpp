#include <bits/stdc++.h>
using namespace std;
const long long InF =1e18;
int main()
{
    int n, e;
    cin >> n >> e;
    long long dis[n + 1][n + 1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dis[i][j] = InF;

            if (i == j)
                dis[i][j] = 0;
        }
    }
    while (e--)
    {
        long long a, b, w;
        cin >> a >> b >> w;
        if (dis[a][b] > w)
            dis[a][b] = w;
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dis[i][k] + dis[k][j] < dis[i][j])
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (dis[x][y] == InF)
            cout << "-1" << endl;
        else
            cout << dis[x][y] << endl;
    }

    return 0;
}

/*

1. take n, e input
2. declare a 2D matrix of size n+1 * n+1, type long long int
3. initialize the matrix with value LONG_MAX, and diagonally (i==j) with value 0
4. start a loop for e times
5. take u, v, w input as long long int
6. if mat[u][v] is greater than w, then change mat[u][v] with the value w
7. start floyd warshell algo over the matrix
8. take q input, and start a loop for q times
9. take s and d input, print mat[s][d] but if it's LONG_MAX then print only -1

*/