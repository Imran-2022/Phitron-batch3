#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum=0;
    for(int i=1;i<n;i++){
        sum+=arr[i]-arr[0];
    }
    cout<<sum<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}