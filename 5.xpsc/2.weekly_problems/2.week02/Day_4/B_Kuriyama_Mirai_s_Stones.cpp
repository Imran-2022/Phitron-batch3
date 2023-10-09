/*
Algorithm/techniques Used:[

]

Additional Notes: [

]
*/

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define newline cout << endl;
#define e '\n'
#define fl(i, a, n) for (int i = a; i < n; i++)
#define fll(i, a, b) for (i = a; i >= b; i--)
#define F first
#define S second
#define pb push_back
#define all(p) p.begin(), p.end()
#define rall(v) v.rbegin(), v.rend()
#define si set<int>
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vpi vector<pii>
#define vpp vector<pair<int, pii>>
#define mii map<int, int>
#define mpi map<pii, int>
#define spi set<pii>
#define sz(x) ((int)x.size())
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define print(a)          \
    for (auto x : a)      \
        cout << x << ' '; \
    cout << e;
#define print1(a)    \
    for (auto x : a) \
        cout << x.F << ' ' << x.S << endl;
#define print2(a, x, y)         \
    for (int i = x; i < y; i++) \
        cout << a[i] << ' ';    \
    cout << e;
#define IMRAN ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

using namespace std;
#define tastecase // cin>>t;

void solve()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    int i;
    fl(i, 0, n) cin >> arr[i];
    int t;
    cin >> t;

    vector<long long> cms_arr(n);
    cms_arr[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        cms_arr[i] = cms_arr[i - 1] + arr[i];
    }

    vector<long long> vt2(arr.begin(), arr.end());
    sort(vt2.begin(), vt2.end());
    vector<long long> cms_arr2(n);

    cms_arr2[0] = vt2[0];
    for (int i = 1; i < n; i++)
    {
        cms_arr2[i] = cms_arr2[i - 1] + vt2[i];
    }
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        long long result = 0;
        if (a == 1)
        {
            if (b == 1)
            {
                result = cms_arr[c - 1];
            }
            else
            {
                result = cms_arr[c - 1] - cms_arr[b - 2];
            }
        }
        if (a == 2)
        {
            if (b == 1)
            {
                result = cms_arr2[c - 1];
            }
            else
            {
                result = cms_arr2[c - 1] - cms_arr2[b - 2];
            }
        }
        cout << result << e;
    }
}

int main()
{
    IMRAN
    int t = 1;
    tastecase while (t--) solve();
    return 0;
}
