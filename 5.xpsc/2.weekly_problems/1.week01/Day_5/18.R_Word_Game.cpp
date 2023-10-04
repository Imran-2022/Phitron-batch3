/**
 * problem link : https://codeforces.com/problemset/problem/1722/C
 * 
 * comment : :  check later ! logical problem ! [learn mp]
 * 
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    map<string,int>mp;
    string arr[3][n];
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            mp[arr[i][j]]++;
        }
    }

    vector<int> vt;
    for(int i=0;i<3;i++){
        int tcnt=0;
        for(int j=0;j<n;j++){
            if(mp[arr[i][j]]==1)tcnt+=3;
            if(mp[arr[i][j]]==2)tcnt+=1;
        }
        vt.push_back(tcnt);
    }
    for(int x:vt){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}