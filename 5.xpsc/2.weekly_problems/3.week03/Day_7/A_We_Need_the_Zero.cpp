#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cnt^=arr[i];
    }
    if(n%2==0){
        if(cnt==0)cout<<0<<endl;
        else cout<<-1<<endl;
    }
    else {
        cout<<cnt<<endl;
    }
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}