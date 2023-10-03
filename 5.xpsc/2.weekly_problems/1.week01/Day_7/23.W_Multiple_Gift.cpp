/**
 * problem link : https://atcoder.jp/contests/abc083/tasks/arc088_a?lang=en
 * 
 * comment : : just amazing , check later !
 * 
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long l,k;cin>>l>>k;
    long long cnt=0;
    for(long long i=l;i<=k;i*=2){
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}