#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int t=0;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int f=0;
        if(s[i]=='L')
            f=i;
        else
            f=n-i-1;
        t+=f;
        v.push_back(max(i,n-i-1)-f);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<n;i++)
    {
        t+=v[i];
        cout<<t<<" ";
    }
    cout<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}