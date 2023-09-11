#include <bits/stdc++.h>
using namespace std;

// compare

bool cmp(const pair<int, int> x1, const pair<int, int> x2)
{
    if (x1.first == x2.first)
    {
        return x1.second < x2.second;
    }
    return x1.first < x2.first;
}

int main()
{
    int e;
    cin >> e;
    vector<pair<int, int>> edges(e);
    for (int i = 0; i < e; i++)
    {
        cin >> edges[i].first >> edges[i].second;
    }

    sort(edges.begin(), edges.end(), cmp);

    for (auto edge : edges)
    {
        cout << edge.first << " " << edge.second << endl;
    }
    return 0;

}
