#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,s,r;
    cin>>n>>s>>r;
    vector<int>vt;
    vt.push_back(s-r);
    n--;
    int val= r/n;
    int rem=r%n;
    for(int i=0;i<n;i++){
        vt.push_back(val);
    }
    int i=1;
    while(rem){
        vt[i++]+=1;
        rem--;
    }
    for(int x:vt)cout<<x<<" ";
    cout<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}