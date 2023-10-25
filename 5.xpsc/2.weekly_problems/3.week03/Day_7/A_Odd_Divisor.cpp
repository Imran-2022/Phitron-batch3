#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    if(n & n-1!=0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}