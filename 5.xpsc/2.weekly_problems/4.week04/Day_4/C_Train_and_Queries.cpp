#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>vt(n);

    for(int i=0;i<n;i++){
        cin>>vt[i];
    }

    map<int,vector<int>>mp;
    for(int i=0;i<n;i++){
        mp[vt[i]].push_back(i);
    }

    while(m--){
        int x,y;
        cin>>x>>y;
        if(mp[x].empty() || mp[y].empty()){
            cout<<"NO"<<endl;
            continue;
        }
        if(x==y){
            cout<<"YES"<<endl;
             continue;
        }
        if(mp[x].front()<mp[y].back()){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }

}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}