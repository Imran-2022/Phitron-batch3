/**
 * problem link : https://atcoder.jp/contests/abc150/tasks/abc150_b?lang=en
 * 
 * comment : : wow  ! however not efficient
 * 
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string ss;
    cin>>ss;
    int cnt=0;
    for(int i=0;i<ss.size()-2;i++){
            if(ss[i]=='A' && ss[i+1]=='B' && ss[i+2]=='C')cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}