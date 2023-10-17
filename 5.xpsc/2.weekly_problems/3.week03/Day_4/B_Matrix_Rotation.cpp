#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n=2,m=4;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    bool flag=false;
    while(m--){
        if((arr[0][0]<arr[0][1] && arr[0][0]<arr[1][0]) && arr[0][1]<arr[1][1] && arr[1][0]<arr[1][1]){
            flag=true;
            break;
        }else{
            int tmp=arr[0][0];
            arr[0][0]=arr[1][0];
            arr[1][0]=arr[1][1];
            arr[1][1]=arr[0][1];
            arr[0][1]=tmp;
        }
        // for(int i=0;i<n;i++){
        // for(int j=0;j<n;j++){
        //     cout<<arr[i][j]<<" ";
        // }
        // cout<<endl;
    // }
        // cout<<endl;

    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}