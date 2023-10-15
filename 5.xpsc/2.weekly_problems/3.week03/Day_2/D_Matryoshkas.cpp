#include<bits/stdc++.h>
#define ll long long
using namespace std;
void sol()
{
	int n;
	cin>>n;
	map<int,int> mp;
	
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		mp[x]++;
	}
	ll ans=0;
	for(auto [x,y] : mp)
	{
		ans+=max(0,y-mp[x-1]);
	}
	cout<<ans<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)sol();
}