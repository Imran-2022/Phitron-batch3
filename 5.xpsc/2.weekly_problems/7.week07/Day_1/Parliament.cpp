#include <bits/stdc++.h>
using namespace std;

void solve(){
    double a,b;
    cin>>a>>b;
    // cout<<a/2<<" "<<b<<endl;
    if(a/2<=b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}