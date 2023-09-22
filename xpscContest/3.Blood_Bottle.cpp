#include <bits/stdc++.h>
using namespace std;

void solve(){
    string ss;
    cin>>ss;
    vector<int> vt;
    int cnt=0;
    for(int i=0;i<ss.size();i++){
        if(ss[i]=='1'){
            cnt++;
        }else{
            if(cnt)vt.push_back(cnt);
            cnt=0;
        }
    }
    if(cnt)vt.push_back(cnt);
    sort(vt.rbegin(),vt.rend());
    int i = vt.size()-1, ans = 0;
    for(i=0;i<vt.size();i++)
    {
         if(i%2==0)ans+=vt[i];
    }
    cout << ans << endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}