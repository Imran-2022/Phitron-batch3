/**
 * problem link : https://atcoder.jp/contests/abc083/tasks/arc088_a?lang=en
 * 
 * new to me : 
 * 
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,k;
    cin>>t>>k;
    long long cnt=0;
    while(t--){
        long long  n;
        cin>>n;
        if(n%k==0)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}