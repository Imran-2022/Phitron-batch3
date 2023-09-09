// memoization approach.

// #include <bits/stdc++.h>
// using namespace std;

// vector<int>vt(45,-1);

// int solve(int n){
//     if(n<=2)return n;
//     if(vt[n]!=-1)return vt[n];
//     return vt[n]= solve(n-1)+solve(n-2);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<solve(n)<<endl;
//     return 0;
// }

// tabolar approach..

#include <bits/stdc++.h>
using namespace std;

vector<int>vt(50);

int solve(int n){
    if(n<=2)return n;
    vt[1]=1;
    vt[2]=2;
    for(int i=3;i<=n;i++){
        vt[i]=vt[i-1]+vt[i-2];
    }
    return vt[n];
}

int main()
{
    int n;
    cin>>n;
    cout<<solve(n)<<endl;
    return 0;
}
