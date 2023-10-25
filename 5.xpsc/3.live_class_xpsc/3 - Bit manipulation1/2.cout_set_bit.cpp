// count set bit

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    while(n){
        ans+=n&1;
        n>>=1;
    }
    cout<<ans<<endl;

    return 0;
}

/*
input:
5

output:
2


*/