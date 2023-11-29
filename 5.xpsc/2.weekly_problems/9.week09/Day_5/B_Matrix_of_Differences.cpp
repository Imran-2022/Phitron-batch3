/**
* author : _Grandmaster
* created : 29-11-2023 06:51:37
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
    int n,i,j,k=0;
    cin>>n;
    vi v;
    fl(i,0,(n*n)/2){
        v.pb(n*n-i);
        v.pb(i+1);
    }

    if((n*n)%2) v.pb(n*n/2 + 1);

    for(int i=0;i<v.size();i = i+n){
        if(k==0){
            fl(j,i,i+n){cout<<v[j]<<" ";}
        }
        else{
            for(int j=i+n-1;j>=i;j--) cout<<v[j]<<" ";
            }
        k = 1-k; 
        cout<<endl;
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