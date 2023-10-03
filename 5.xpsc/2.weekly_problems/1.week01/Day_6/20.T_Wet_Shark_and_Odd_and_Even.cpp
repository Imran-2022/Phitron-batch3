/**
 * problem link : https://codeforces.com/problemset/problem/621/A
 * 
 * comment : : 
 * 
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    long long min_odd=INT_MAX;
    long long sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0 && min_odd>arr[i])min_odd=arr[i];
        sum+=arr[i];
    }
    if(sum%2==0)cout<<sum<<endl;
    else cout<<sum-min_odd<<endl;
    return 0;
}