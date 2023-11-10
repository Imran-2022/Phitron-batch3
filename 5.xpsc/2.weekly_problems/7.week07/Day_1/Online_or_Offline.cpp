#include <bits/stdc++.h>
using namespace std;

void solve(){
    double n,m;
    cin>>n>>m;
    n-=(n*(.1));
    // cout<<n<<" "<<m<<endl;
    if(n==m)cout<<"EITHER"<<endl;
    else if(n>m)cout<<"DINING"<<endl;
    else cout<<"ONLINE"<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}