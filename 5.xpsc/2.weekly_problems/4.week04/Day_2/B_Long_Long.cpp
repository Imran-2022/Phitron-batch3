#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    vector<long long>vt(n);
    for(long long i=0;i<n;i++)cin>>vt[i];
    long long ans=0;
    long long cnt=0;
    bool ok=false;
    for(long long i=0;i<n;i++){
        ans+=abs(vt[i]);
        if(!ok && vt[i]<0){
            cnt++;
            ok=true;
        }else if(vt[i]>0)ok=false;
    }
    cout<<ans<<" "<<cnt<<endl;
}

int main()
{
    long long t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}