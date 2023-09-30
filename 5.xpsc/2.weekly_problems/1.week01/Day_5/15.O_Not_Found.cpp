/**
 * problem link : https://vjudge.net/contest/584662#problem/O
 * 
 * new to me : 
 * play with string
 * remove duplicate from a string.
 * sort string
 * tolowercase 
 * iterate 
 * 
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string ss;
    cin>>ss;
    sort(ss.begin(),ss.end());
    auto it = std::unique(ss.begin(), ss.end());
    ss.erase(it, ss.end());
    transform(ss.begin(), ss.end(), ss.begin(), ::tolower);
    // cout<<ss<<endl;
    int ii=0;
    for(char i='a';i<='z';i++){
        if(ss[ii]!=i){
            cout<<i<<endl;
            return;
        }
        ii++;
    }
    cout<<"None"<<endl;
}

int main()
{
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}