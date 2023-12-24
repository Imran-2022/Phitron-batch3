/**
* author : _Grandmaster
* created : 24-12-2023 11:26:21
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
        
    int m,n,k;
    cin>>m>>n>>k;

	int l , r, u , d;
	l = r = u = d = 0 ;

	for(int i = 0 ; i < m ; i ++){
		int x , y ; 
        cin >> x >> y;

		if(x < n) l++ ;
		if(x > n) r++;
		if(y < k) d++;
		if(y > k) u++;

	}
	int ans = max({l,r,u,d}) ;

	if(ans == l) n -= 1 ;
	else if( ans == r) n += 1;
	else if(ans == d) k -= 1;
	else k += 1;

	cout <<ans <<endl << n << " "<< k << endl ;
}

int main()
{
    IMRAN
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}