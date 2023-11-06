/**
* author : _Grandmaster
* created : 06-11-2023 20:20:30
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
     ll n,ans=INT_MAX; cin >> n;
    vector<ll>a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    ans=min(ans,abs(a[0]-a[1]));
    ans=min(ans,abs(a[n-2]-a[n-1]));

    for(int i=1; i<n-1; i++)
    {
        ans=min(ans,max(abs(a[i]-a[i-1]),abs(a[i]-a[i+1])));
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