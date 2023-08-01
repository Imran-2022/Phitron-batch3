#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int arr2[n];
    arr2[0]=arr[0];
    for(long long int i=1;i<n;i++){
        arr2[i]=arr[i]+arr2[i-1];
    }
  
    while(m--){
        long long int s1,s2,sum;
        cin>>s1>>s2;
        s1--;
        s2--;
        if(s1==0){
            sum=arr2[s2];
        }
        else{
            sum=arr2[s2]-arr2[s1-1];
        }
        
        cout<<sum<<endl;
    }
    return 0;
}