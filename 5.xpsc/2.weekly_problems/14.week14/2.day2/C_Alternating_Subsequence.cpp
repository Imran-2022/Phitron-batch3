/**
* author : imr_an
* created : 30-12-2023 17:08:10
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

bool sign(int n){
    return n>0;
}

void solve(){
    int n;
    cin>>n;
    vi vt(n);
    fl(i,0,n)cin>>vt[i];
    ll ans=0;
    fl(i,0,n){
        int j=i;
        int mx=vt[i];
        while(j<n && sign(vt[i])==sign(vt[j]))mx=max(mx,vt[j]),j++;
        i=j-1;
        ans+=mx;
    }
    cout<<ans<<endl;
}

int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}
