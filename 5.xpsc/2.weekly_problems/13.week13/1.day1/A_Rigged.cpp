/**
 * author : _Grandmaster
 * created : 22-12-2023 21:33:49
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
#define IMRAN ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    bool flag = 1;
    for (int i = 1; i < n; i++)
    {
        int a1, b1;
        cin >> a1 >> b1;
        if (a1 >= a && b1 >= b)
        {
            flag = 0;
        }
    }
    if (flag)
        cout << a << endl;
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