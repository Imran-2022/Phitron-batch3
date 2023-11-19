/**
* author : _Grandmaster
* created : 19-11-2023 09:14:13
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
    int n,i,j,k,mx=0;
    cin>>n;
    map<int,int>m,a;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        a[k]++;
    }
    for(auto i:a)
    {
        for(j=i.first;j<=n;j+=i.first)
        {
            m[j]+=i.second;
            mx=max(mx,m[j]);
        }
    }
    cout<<mx<<"\n";
}

int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}