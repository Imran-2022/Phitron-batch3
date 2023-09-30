/**
 * problem link : https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en
 * 
 * new to me : 
 * 
*/
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    int cnt=0;
    int i=2;
    while(i>0){
        if(a>b){
            cnt+=a;
            a--;
        }else{
            cnt+=b;
            b--;
        }
        i--;
    }
    cout<<cnt<<endl;
}

int main()
{
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}