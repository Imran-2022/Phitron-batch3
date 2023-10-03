/**
 * problem link : https://atcoder.jp/contests/abc199/tasks/abc199_a?lang=en
 * 
 * comment : : 
 * 
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long int a,b,c;cin>>a>>b>>c;
    a*=a;b*=b;c*=c;
    if(a+b<c)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int main()
{
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}