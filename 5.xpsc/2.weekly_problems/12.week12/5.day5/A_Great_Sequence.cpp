/**
* author : _Grandmaster
* created : 21-12-2023 11:29:04
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
#define print(a)for (auto x : a)cout << x << ' ';cout<<e;
#define print1(a)for (auto x : a)cout << x.F << ' ' << x.S << endl;
#define IMRAN ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

void solve() {
    int n, m, i;
    cin >> n >> m;

    vi vt(n);
    fl(i, 0, n) cin >> vt[i];

    map<ll, ll> mp;
    fl(i, 0, n) mp[vt[i]]++;

    sort(all(vt));
    int rslt = 0;

    fl(i, 0, n) {
        if (mp[vt[i]] && mp[1LL * vt[i] * m]) {
            rslt += 2;
            if (mp[vt[i]] == 0) mp.erase(mp[vt[i]]);
            else mp[vt[i]]--;
            if (mp[1LL * vt[i] * m] == 0) mp.erase(1LL * vt[i] * m);
            else mp[1LL * vt[i] * m]--;
        }
    }

    cout << n - rslt << endl;
}


int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}