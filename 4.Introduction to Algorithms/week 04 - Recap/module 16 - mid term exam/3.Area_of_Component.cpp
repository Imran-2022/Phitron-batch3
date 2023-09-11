#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, int>

const int N = 1e3+5;
bool vis[N][N];
char a[N][N];
int n, m;

vector<pi> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid(int cI, int cJ)
{
    return cI >= 0 && cI < n && cJ >= 0 && cJ < m && a[cI][cJ] == '.';
}

int dfs(int si, int sj)
{
    vis[si][sj] = true;
    int a = 1;
    for (int i = 0; i < 4; i++)
    {
        pi p = path[i];
        int ci = si + p.first;
        int cj = sj + p.second;
        if (isValid(ci, cj) && !vis[ci][cj])
        {
            a += dfs(ci, cj);
        }
    }
    return a;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int area = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && a[i][j] == '.')
            {
                int ar = dfs(i, j);
                if (area == -1 || ar < area)
                {
                    area = ar;
                }
            }
        }
    }

    cout << area << endl;

    return 0;
}
