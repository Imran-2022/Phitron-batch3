#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==0)cout<<1<< " ";
        else cout<<0<<" ";
    }
    cout<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}