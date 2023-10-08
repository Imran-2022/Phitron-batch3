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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arr2[n];
    arr2[0]=arr[0];
    for(int i=1;i<n;i++){
        arr2[i]=arr2[i-1]+arr[i];
    }
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x==0)cout<<arr2[y]<<endl;
        else cout<<arr2[y]-arr2[x-1]<<endl;
        
    }
}


int main(){
    IMRAN
    int t = 1;
    // cin>>t;
    while(t--)solve();
    return 0;
}