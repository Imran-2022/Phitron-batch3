#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string newSt;
    vector<int>vt;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='0'){
            string pp;
            pp+=s[i-1];
            pp+=s[i-2];
            i-=2;
            reverse(pp.begin(),pp.end());
            vt.push_back(stoi(pp));
            // cout<<pp<<" ";
        }else{
            string pp;
            pp+=s[i];
            // cout<<pp<<" ";
            vt.push_back(stoi(pp));
        }
    }
    reverse(vt.begin(),vt.end());
    for(auto xx:vt){
        newSt+='0'+48+xx;
    }
    cout<<newSt<<endl;

}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}