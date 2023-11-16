/**
* author : _Grandmaster
* created : 16-11-2023 22:56:22
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
    ll n,k;
    cin>>n>>k;
    vector<ll>vt;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            vt.push_back(i);
            if(i*i!=n)vt.push_back(n/i);
        }
    }
    if(vt.size()<k)cout<<-1<<endl;
    else sort(vt.begin(),vt.end()) , cout<<vt[k-1];
}

int main()
{
    IMRAN
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}