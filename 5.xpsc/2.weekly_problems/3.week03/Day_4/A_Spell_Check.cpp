#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    string s2="Timur";
    sort(s2.begin(),s2.end());
    if(s==s2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}