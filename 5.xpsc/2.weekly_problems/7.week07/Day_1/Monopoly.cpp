#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<int>vt(4);
    for(int i=0;i<4;i++){
        cin>>vt[i];
    }
    sort(vt.rbegin(),vt.rend());
    if(vt[0]>vt[1]+vt[2]+vt[3])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}