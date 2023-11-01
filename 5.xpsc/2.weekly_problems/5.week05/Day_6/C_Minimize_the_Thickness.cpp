/**
* author : _Grandmaster
* created : 01-11-2023 13:11:35
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
    int i,j,n;
    cin>>n;
    vi a(n);
    fl(i,0,n)cin>>a[i];
    ll ans=n;
    int segment_Sum=0;
    fl(i,0,n){
        segment_Sum+=a[i];
        ll sum=0,len=0,mxLen=i+1;
        bool flag=false;
        fl(j,i+1,n){
            if(sum+a[j]>segment_Sum)break;
            if(j==n-1 and sum+a[j]==segment_Sum){
                mxLen=max(mxLen,len+1);
                flag=true;
                break;
            }
            sum+=a[j];
            len++;
            if(sum==segment_Sum){
                mxLen=max(mxLen,len);
                len=0;
                sum=0;
            }
        }
        if(flag){
            ans=min(ans,mxLen);
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