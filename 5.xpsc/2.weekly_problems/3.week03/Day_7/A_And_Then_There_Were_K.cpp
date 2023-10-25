#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int cnt=0;
    while(n>1){
        n>>=1;
        cnt++;
    }
    int p=1<<cnt;
    // cout<<p<<endl;
    cout<<p-1<<endl;
}
int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}