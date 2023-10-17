#include <bits/stdc++.h>
using namespace std;

void solve(){
    string u;
    cin>>u;
    string s="Yes";
    while(s.size()<60){
        s+=s;
    }
    // cout<<s<<endl;
    if(s.find(u)!=-1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}