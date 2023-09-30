/**
 * problem link : https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en
 * 
 * new to me : tittle tricky. check it .
 * 
*/
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;cin>>a>>b>>c;
    vector<int>vt;
    while(b>=c){
        if(c>=a && c<=b)vt.push_back(c);
        c=c*2;
    }
    if(vt.size())cout<<vt[0]<<endl;
    else cout<<"-1"<<endl;
}

int main()
{
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}