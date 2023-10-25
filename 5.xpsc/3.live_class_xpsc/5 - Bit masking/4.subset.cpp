// this is called bit masking.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<vector<int>>vt;
    for(int i=0;i<(1<<n);i++){
        // cout<<i<<endl; 0 to 7
        vector<int>subset;
        for(int j=0;j<n;j++){
            int mask = 1<<j;
            if((i&mask)==0){
                // nibo na
            }else{
                // cout<<a[j]<<" ";
                subset.push_back(a[j]);
            }
            // cout<<endl;
        }
        vt.push_back(subset);
    }

    for(int i=0;i<vt.size();i++){
        for(int j=0;j<vt[i].size();j++){
            cout<<vt[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}


/*
input:
3
1 2 5
f
output:


1 
2 
1 2 
5 
1 5 
2 5 
1 2 5 

*/