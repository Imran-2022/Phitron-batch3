#include <bits/stdc++.h>
using namespace std;
const string pi= "3141592653589793238462643383279";
void solve(){
    string  s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==pi[i])cnt++;
        else break;
    }
    cout<<cnt<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}