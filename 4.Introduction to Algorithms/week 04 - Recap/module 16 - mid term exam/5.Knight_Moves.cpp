#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
const int N = 1010;

vector<pii> direc = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};

bool isValid(int i, int j, int x, int y)
{
    return (i >= 0 && i < x && j >= 0 && j < y);
}

int bfs(int si, int sj, int di, int dj, int x, int y)
{
    vector<vector<int>> dist(x, vector<int>(y, -1));
    queue<pii> q;

    q.push({si, sj});
    dist[si][sj] = 0;

    while (!q.empty())
    {
        pii currentE = q.front();
        q.pop();
        int i = currentE.first;
        int j = currentE.second;

        if (i == di && j == dj)
        {
            return dist[di][dj];
        }

        for (auto d : direc)
        {
            int ni = i + d.first;
            int nj = j + d.second;

            if (isValid(ni, nj, x, y) && dist[ni][nj] == -1)
            {
                q.push({ni, nj});
                dist[ni][nj] = dist[i][j] + 1;
            }
        }
    }

    return -1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, si, sj, di, dj;
        cin >> x >> y >> si >> sj >> di >> dj;

        cout << bfs(si, sj, di, dj, x, y) << endl;
    }

    return 0;
}
