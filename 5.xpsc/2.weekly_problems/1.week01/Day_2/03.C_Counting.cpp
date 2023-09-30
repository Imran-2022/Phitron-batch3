/**
 * problem link : https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
 * 
 * new to me : 
 * 
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;cin>>n>>m;
    int cnt=0;
    for(int i=n;i<=m;i++){
        cnt++;
    }
    cout<<cnt<<endl;
}

int main()
{
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}