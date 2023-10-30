#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s=to_string(n);
    int sz=s.size();
    s[0]='1';
    for(int i=1;i<sz;i++){
        s[i]='0';
    }
    int nm=stoi(s);
    cout<<n-nm<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}