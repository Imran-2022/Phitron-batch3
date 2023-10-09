#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define newline cout<<endl;
#define endl '\n'
#define IMRAN ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int>vt(n);
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        for(int j=0;j<x;j++){
            char ch;
            cin>>ch;
            if(ch=='D'){
                if(vt[i]==9)vt[i]=0;
                else vt[i]++;
            }else if(ch=='U'){
                if(vt[i]==0)vt[i]=9;
                else vt[i]--;
            }
        }
    }
    for(int x:vt)cout<<x<<" ";
    newline
}


int main(){
    IMRAN
    int t = 1;
    cin>>t;
    while(t--)solve();
    return 0;
}