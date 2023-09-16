#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(),arr.end(),greater<int>());
    for(x:arr){
        if(x<arr[0])return x;
    }
    return -1;
}