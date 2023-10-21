#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>vt(n);
    long long sum_even=0,sum_odd=0;
    int cnt_even=0,cnt_odd=0;
    for(int i=0;i<n;i++){
        cin>>vt[i];
        if(vt[i]%2==0){
            cnt_even++;
            sum_even+=vt[i];
        }
        else {
            cnt_odd++;
            sum_odd+=vt[i];
        }
    }

    long long ans=0;

    while(q--){
        int x,y;
        cin>>x>>y;
        if(x==0){
            sum_even+=cnt_even*y;
            if(y%2!=0){
                cnt_odd+=cnt_even;
                cnt_even=0;
            }
        }
        else {
            sum_odd+=cnt_odd*y;
            if(y%2!=0){
                cnt_even+=cnt_odd;
                cnt_odd=0;
            }
        }
        ans=sum_even+sum_odd;
        cout<<ans<<endl;
        ans=0;
    }
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}