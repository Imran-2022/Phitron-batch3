#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vt(n);
    for(int i=0;i<n;i++)cin>>vt[i];
    int x;cin>>x;
    auto it = lower_bound(vt.begin(),vt.end(),x);
    int idx=it-vt.begin();
    cout<<idx<<endl;
   
    return 0;
}

/*
input:
8
1 1 2 2 3 3 3 5
3

output:
4

*/