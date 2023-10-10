#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        s[i]=toupper(s[i]);
    }
    if(s=="YES")cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}