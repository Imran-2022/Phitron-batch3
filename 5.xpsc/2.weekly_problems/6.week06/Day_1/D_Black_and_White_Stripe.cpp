/**
* author : _Grandmaster
* created : 05-11-2023 20:58:44
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

void solve(){

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int a[n + 1];
    a[0] = 0;
    int x = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')x++;
        a[i + 1] = x;
    }

    // for(int i=0;i<n+1;i++)cout<<a[i]<<" ";
    // cout<<endl;

    int ans = INT_MAX;

    for (int i = 0; i < n - k + 1; i++)
    {
        ans = min(ans, a[i + k] - a[i]);
    }

    cout << ans << endl;

}

int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}