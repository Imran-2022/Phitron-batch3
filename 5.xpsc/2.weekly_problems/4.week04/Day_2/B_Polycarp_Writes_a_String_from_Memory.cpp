#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    set<char>st;
    int ans=0;
    for(int i=0;i<s.size();i++){
       st.insert(s[i]);
       if(st.size()>3){
        st.clear();
        st.insert(s[i]);
        ans++;
       }
    }
    if(st.size())ans++;
    cout<<ans<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}