#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool vis[26] = {};
    int res = 0;
    for (char c : s)
    {
        if (!vis[c - 'A'])
        {
            res += 2;
            vis[c - 'A'] = true;
        }
        else
        {
            res++;
        }
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}