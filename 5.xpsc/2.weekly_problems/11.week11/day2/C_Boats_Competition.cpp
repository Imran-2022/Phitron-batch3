/**
* author : _Grandmaster
* created : 11-12-2023 13:21:42
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
    int n,i,j,k;
    cin>>n;
    vi vt;
    fl(i,0,n){
        int x;
        cin>>x;
        vt.pb(x);
    }

    sort(all(vt));

    int ans=0;
    fl(i,1,101){
        int cnt=0;
        for(j=0,k=n-1;j<k;){
            if(vt[j]+vt[k]>i)k--;
            else if(vt[j]+vt[k]<i)j++;
            else {
                cnt++;
                j++;
                k--;
            }
        }
        ans=max(ans,cnt);
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