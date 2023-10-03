#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int sum=0,sum2=0;
    sum+= s[0]-'0';
    sum+=s[1]-'0';
    sum+=s[2]-'0';
    
    sum2+= s[3]-'0';
    sum2+=s[4]-'0';
    sum2+=s[5]-'0';
    if(sum==sum2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}