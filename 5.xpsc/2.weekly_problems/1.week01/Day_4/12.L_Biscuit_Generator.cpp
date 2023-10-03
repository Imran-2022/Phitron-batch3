/**
 * problem link : https://atcoder.jp/contests/abc125/tasks/abc125_a?lang=en
 * 
 * comment : : just wow ! nice problem.
 * 
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,t;
    cin>>a>>b>>t;
    t=t+0.5;

    int cnt=0;
    for(int i=a;i<=t;i+=a){
        cnt+=b;
    }
    cout<<cnt<<endl;
    return 0;
}
