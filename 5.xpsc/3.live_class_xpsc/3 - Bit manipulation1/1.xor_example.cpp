// x^x=0

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ans^=a;
    }
    cout<<ans<<endl;
    return 0;
}


/*
input:

11
1 2 5 3 1 2 5 2 1 3 1

output:

2



*/