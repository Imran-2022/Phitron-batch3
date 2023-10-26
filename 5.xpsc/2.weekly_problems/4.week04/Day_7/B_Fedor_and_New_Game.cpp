#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int cnt;
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];
    int x;
    cin>>x;
    int  ans=0;
    for(int i=0;i<m;i++)
    {
        cnt=0;
        for(int j=0;j<=n;j++)
        {
            if(((1<<j)&a[i])!=((1<<j)&x))
            cnt++;
        }
        if(cnt<=k)ans++;
    }
    cout<<ans<<endl;
}

int main()
{
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}