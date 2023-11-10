#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n%2==0 &&n%7==0)cout<<"Alice"<<endl;
    else if(n%2!=0 &&n%9==0)cout<<"Bob"<<endl;
    else cout<<"Charlie"<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}