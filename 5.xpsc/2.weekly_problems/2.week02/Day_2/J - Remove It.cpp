#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,nn;
    cin>>n>>nn;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
       if(arr[i]!=nn)cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}