/**
* author : _Grandmaster
* created : 16-11-2023 23:12:38
**/

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define newline cout << endl;
#define e '\n'
#define fl(i, a, n) for (int i = a; i < n; i++)
#define F first
#define S second
#define pb push_back
#define all(p) p.begin(), p.end()
#define rall(v) v.rbegin(), v.rend()
#define si set<int>
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define print(a)for (auto x : a)cout << x << ' ';cout<<e;
#define print1(a)for (auto x : a)cout << x.F << ' ' << x.S << endl;
#define IMRAN ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

void solve(){
    int n;
	cin >> n;
	ll ans=0;
	int minn1=INT_MAX,minn2=INT_MAX;
	while(n--){
		int m;
		cin >> m;
		int a[m];
		for(int i=0;i<m;i++){
	    cin >> a[i];
		minn1=min(a[i],minn1);		
		}
		sort(a,a+m);
		ans+=a[1];
		minn2=min(a[1],minn2);
	}
	
	cout << ans-minn2+minn1 << endl;
}

int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}