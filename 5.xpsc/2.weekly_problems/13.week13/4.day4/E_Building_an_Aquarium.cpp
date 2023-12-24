/**
* author : _Grandmaster
* created : 24-12-2023 06:31:29
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
    long long n,x;
    cin>>n>>x;
    int a[n];
    fl(i,0,n)cin>>a[i];
    long long l=-1,r=1e10;
    while (l+1<r)
    {
        long long mid=(l+r)/2,count=0;
        fl(i,0,n)if(a[i]<mid)count+=mid-a[i];
        if(count>x)r=mid;
        else l=mid;
    }
    cout<<l<<'\n';
}

int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}