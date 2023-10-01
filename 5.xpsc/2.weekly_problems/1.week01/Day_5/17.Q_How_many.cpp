/**
 * problem link : https://atcoder.jp/contests/abc214/tasks/abc214_b
 * 
 * new to me : 
 * 
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,t;
    cin>>s>>t;
    int cnt=0;
    for(int i=0;i<=100;i++){
        for(int j=0;j<=100;j++){
            for(int k=0;k<=100;k++){
                if(i+j+k<=s && i*j*k<=t)cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}