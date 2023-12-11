/**
* author : _Grandmaster
* created : 11-12-2023 22:21:28
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
    int n,k,i;
    cin>>n>>k;
    vi vt(n);
    fl(i,0,n)cin>>vt[i];
    ll sum=0;
    fl(i,0,n)sum+=vt[i];
    ll mx = (n * (ll)(n + 1) / 2) - sum;
    vi vt2;
    vt2=vt;
    vt2.pb(mx);
    k%=(n+1);
    int idx=(n+1-k)%(n+1);
    vi ans;
    fl(i,idx,n+1){
        ans.pb(vt2[i]);
    }
    fl(i,0,idx){
        ans.pb(vt2[i]);
    }
    fl(i,0,n)cout<<ans[i]<<" ";
    cout<<endl;
}

int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}