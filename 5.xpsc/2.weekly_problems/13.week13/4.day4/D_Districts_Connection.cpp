/**
 * author : _Grandmaster
 * created : 24-12-2023 11:17:46
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
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    vector<pair<int, int>> ans;
    int idx = -1;
    for (int i = 1; i < n; ++i)
    {
        if (a[i] != a[0])
        {
            idx = i;
            ans.push_back({1, i + 1});
        }
    }
    if (idx == -1)
    {
        cout << "NO" << endl;
        return;  // Fix: Return after printing "NO"
    }
    for (int i = 1; i < n; ++i)
    {
        if (a[i] == a[0])
            ans.push_back({idx + 1, i + 1});
    }
    cout << "YES" << endl;
    for (auto [x, y] : ans)
        cout << x << " " << y << endl;
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
