/**
* author : _Grandmaster
* created : 07-12-2023 22:18:13
**/

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define newline cout << endl;
#define e '\n'
#define fl(i, a, n) for (long long i = a; i < n; i++)
#define F first
#define S second
#define pb push_back
#define all(p) p.begin(), p.end()
#define rall(v) v.rbegin(), v.rend()
#define si set<int>
#define vi vector<long long>
#define vvi vector<vi>
#define pii pair<int, int>
#define print(a)for (auto x : a)cout << x << ' ';cout<<e;
#define print1(a)for (auto x : a)cout << x.F << ' ' << x.S << endl;
#define IMRAN ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

void solve(){
    ll n,i;
    cin>>n;
    ll sm=0;
    ll gc=0;
    vi vt(n);
    fl(i,0,n)cin>>vt[i];
    sort(all(vt));
    fl(i,0,n){
        gc=__gcd(gc,vt[n-1]-vt[i]);
        sm+=vt[n-1]-vt[i];
    }
    cout<<sm/gc<<" "<<gc<<endl;
}

int main()
{
    IMRAN
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}