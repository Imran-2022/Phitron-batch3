/**
 * problem link : https://codeforces.com/problemset/problem/633/A
 * 
 * new to me : learn new technique wow.. !
 * 
*/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll 	 long long
#define fr(i,n)           for(int i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
int main()
{
    ll m,n,k,i,j,ans,d;
    while(cin>>m>>n>>k)
    {
        ans=0;
        fr(i,1000)
        {
            d=(k-(m*i));
            if(d<0){ans=0;break;}
            if (d%n==0 ) { ans=1;break;}
        }

        if(ans)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}