#include <bits/stdc++.h>
using namespace std;
int fibo(int n){

    if(n==0||n==1)return 1;

    // int ans1=fibo(n-1);
    // int ans2=fibo(n-2);
    // return ans1+nas2;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;// 5no val of fibonacci series.
    
    return 0;
}

/*

// 1, 1, 2, 3, 5, 8, 13, 21............ val
// 0, 1, 2, 3, 4, 5, 6,  7............. indx

input: 
5

output:
8

*/