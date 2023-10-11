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

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    fl(i, 0, n) cin >> v[i];

    ll ans = 0, cnt_max = 0;
    
    for (ll i = 2; i <= 1000; i++)
    {
        ll cnt = 0;
        for (ll j = 0; j < n; j++) 
        {
            if (v[j] % i == 0)
                cnt++;
        }
        if (cnt > cnt_max)
        {
            ans = i;
            cnt_max = cnt;
        }
    }

    cout << ans << endl;
}


int main()
{
    IMRAN
    int t = 1;
    // cin>>t;
    while (t--)
        solve();
    return 0;
}