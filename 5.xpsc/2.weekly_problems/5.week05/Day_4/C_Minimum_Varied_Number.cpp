#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>vt;
    for(int i=9;i>=1;i--){
        n-=i;
        if(n>=0){
            vt.push_back(i);
        }else{
            n+=i;
        }
    }
    sort(vt.begin(),vt.end());
    for(auto x: vt)cout<<x;
    cout<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}