#include<bits/stdc++.h>
using namespace std;
void divide(int a[],int l, int r)
{
    for(int i=l;i<=r;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    if(l<r)
    {
        int mid=(l+r)/2;
        divide(a,l,mid);
        divide(a,mid+1,r);
    }
}
int main()
{
    int n; 
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    divide(a,0,n-1);
    return 0;
}

/**
input -

6
10 20 30 40 50 60

output-

10 20 30 40 50 60 
10 20 30 
10 20 
10 
20 
30 
40 50 60 
40 50 
40 
50 
60 


*/