#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left_idx=-1;
    int right_idx=-1;
    int mx1=INT_MIN;
    int mx2=INT_MIN;
    
    for(int i=0;i<n;i++){
        if(arr[i]>mx1){
            mx2=mx1;
            mx1=arr[i];
        }
        else if(arr[i] > mx2 && arr[i] != mx1){
            mx2=arr[i];
        }
    }
    int idx1=-1;
    int idx2=-1;
    for(int i=0;i<n;i++){
        if(idx1==-1){
            if(arr[i]==mx1 || arr[i]==mx2){
                idx1=i;
            }
        }else if(idx2==-1){
            if(arr[i]==mx1 || arr[i]==mx2){
                idx2=i;
            }
        }
    }
    cout<<idx1<<" "<<idx2<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}