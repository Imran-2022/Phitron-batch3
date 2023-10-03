/**
 * problem link : https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en
 * 
 * comment : : 
 * 
*/
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;cin>>s;
    int z=4-s.size();
    for(int i=0;i<z;i++){
        cout<<"0";
    }
    cout<<s<<endl;

}

int main()
{
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}