/**
 * problem link : https://codeforces.com/problemset/problem/1703/B
 * 
 * comment : : 
 * 
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string ss;
    cin>>ss;
    int cnt=0;
    for(int i=0;i<n;i++){
        int x=0;
        for(int j=i-1;j>=0;j--){
            if(ss[i]==ss[j]){
                x++;
                break;
            }
        }
        if(x){
            cnt+=1;
            x=0;
        }else{
            cnt+=2;
            x=0;
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}