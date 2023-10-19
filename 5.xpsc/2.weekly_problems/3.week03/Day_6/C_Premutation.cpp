#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int matrix[n + 5][n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    map<int, int> mp;
    map<int, int> m;
    for (int i = 1; i <= n; i++)
    {
        mp[matrix[i][n - 1]] = i;
        m[matrix[i][n - 1]]++;
    }
    int idx = 0, val;
    for (auto u : m)
    {
        if (u.second == 1)
            idx = u.first;
        else
            val = u.first;
    }
    // cout<<idx<<" "<<val<<endl;
    // cout<<mp[idx]<<endl;
    for (int i = 1; i < n; i++)
    {
        cout << matrix[mp[idx]][i] << " ";
    }
    cout << val << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}