#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                ans+=__gcd(__gcd(i,j),k);
            }
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}