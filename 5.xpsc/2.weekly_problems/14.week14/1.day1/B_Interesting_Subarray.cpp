/**
 * author : imr_an
 * created : 29-12-2023 22:42:04
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
    int n;
    cin >> n;
    vi vt(n);
    fl(i,0,n)cin>>vt[i];

    int i = 0;
    for (; i < n - 1; i++)
    {
        if (abs(vt[i + 1] - vt[i]) > 1)
        {
            cout << "YES" << endl;
            cout << i + 1 << " " << i + 2 << endl;
            break;
        }
    }
    if (i == n - 1)
    {
        cout << "NO" << endl;
    }
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