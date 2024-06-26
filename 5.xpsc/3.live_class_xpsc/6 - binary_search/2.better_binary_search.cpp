#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)cin>>a[i];
    int x;cin>>x;

    int l=0,r=n-1;
    int ans=-1;
    
    while(l<=r){
        int mid = l+(r-l)/2;

        if(a[mid]==x){
            ans=mid;
            r=mid-1;
            // l=mid+1;
            continue;
        }

        if(x<a[mid]){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }

    if(ans==-1)cout<<"-1"<<endl;
    else cout<<ans<<endl;

    return 0;
}


/**
input:

8
1 1 2 2 3 3 3 5
3

output:

5

*/