#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    vector<long long>vt(n);
    for(long long i=0;i<n;i++){
        cin>>vt[i];
    }
    long long ans=0;
    priority_queue<long long>pq;

    for(long long i=0;i<n;i++){
        if(vt[i]==0){
            if(pq.empty())continue;
            ans+=pq.top();
            pq.pop();
        }else{
            pq.push(vt[i]);
        }
    }
    cout<<ans<<endl;
}

int main()
{
    long long t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}