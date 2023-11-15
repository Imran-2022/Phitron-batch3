/**
* author : _Grandmaster
* created : 15-11-2023 19:10:17
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
    int n,i,ans=0;
    cin>>n;
    vector<int>vt(n);
    fl(i,0,n)cin>>vt[i];
    unordered_map<int,int>mp;
    int s=0;
    mp[0]=1;
    fl(i,0,n){
        s+=vt[i];
        s%=n;
        s = (s + n) % n;
        if(mp.find(s)!=mp.end())ans+=mp[s];
        mp[s]++;
    }
    cout<<ans<<endl;
}

int main()
{
    IMRAN
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}