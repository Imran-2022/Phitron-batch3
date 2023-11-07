/**
 * author : _Grandmaster
 * created : 06-11-2023 21:10:22
 **/

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define newline cout << endl;
#define e '\n'
#define fl(i, a, n) for (int i = a; i < n; i++)
#define F first
#define S second
#define pb push_back
#define all(p) p.begin(), p.end()
#define rall(v) v.rbegin(), v.rend()
#define si set<int>
#define vi vector<int>
#define vvi vector<vi>
#define IMRAN ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vi vt(n);
    vector<pair<int, int>> songs;
    int idx = 0, result = 0;
    fl(i, 0, n)
    {
        int x, y;
        cin >> x >> y;
        if (y == k)
        {
            songs.push_back({x, y});
        }
    }
    
    if (songs.size() < m)
    {
        cout << -1 << endl;
        return;
    }

    sort(rall(songs));

    fl(i, 0, m)
    {
        result += songs[i].first;
    }
    cout << result << endl;
}

int main()
{
    IMRAN
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}