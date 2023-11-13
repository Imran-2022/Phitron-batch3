#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>vt;
    for(int i=0;i<n+m;i++){
        int x;
        cin>>x;
        vt.push_back(x);
    }
    
    sort(vt.begin(),vt.end()-1);
    reverse(vt.begin(),vt.end());
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=vt[i];
    }
    cout<<sum<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}