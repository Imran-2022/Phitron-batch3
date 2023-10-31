/**
* author : _Grandmaster
* created : 31-10-2023 08:41:20
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
    map<int,vi>mp;
    fl(i,0,n){
        mp[vt[i]].push_back(i+1);
    }

    while(k--){
        int a,b;
        cin>>a>>b;
        if(mp[a].size() ==0 || mp[b].size()==0){
            cout<<"NO"<<endl;
            continue;
        }
        if(mp[a].front()<=mp[b].back()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
}

int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}