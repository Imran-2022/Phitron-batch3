/**
 * author : _Grandmaster
 * created : 01-12-2023 20:10:21
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
#define pii pair<int, int>
#define IMRAN ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

void solve()
{
    int n, d, i;
    cin >> n;
    int a[n], find = 1;
    fl(i, 0, n)
    {
        cin >> d;
        if (i == 0)
            a[i] = d;
        else
        {
            a[i] = a[i - 1] + d;
            if (a[i - 1] - d >= 0 && d != 0)
            {
                find = 0;
            }
        }
    }
    if (find)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else
        cout << -1 << endl;
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