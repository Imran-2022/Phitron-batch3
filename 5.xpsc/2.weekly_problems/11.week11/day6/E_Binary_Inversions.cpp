/**
* author : _Grandmaster
* created : 15-12-2023 06:23:20
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

ll calculation(vi vt){
    ll zeros=0,result=0;
    for(int j=vt.size()-1;j>=0;j--){
        if(vt[j]==0)zeros++;
        else result+=zeros;
    }
    return result;
}

void solve(){
    int n,i;
    cin>>n;
    vi vt(n);
    fl(i,0,n)cin>>vt[i];
    ll ans=calculation(vt);
    fl(i,0,n){
        if(vt[i]==0){
            vt[i]=1;
            ans=max(ans,calculation(vt));
            vt[i]=0;
            break;
        }
    }
    for(int j = n - 1; j >= 0; --j){
             if(vt[j]==1){
                vt[j]=0;
                ans=max(ans,calculation(vt));
                vt[j]=1;
                break;
            }
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