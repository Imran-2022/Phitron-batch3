/**
* author : _Grandmaster
* created : 03-11-2023 18:47:18
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

ll dat[200005];

void solve(){
    string str;
    ll n,x;
	cin>>n>>x;
	for(int i = 1;i <= n;i++)cin>>dat[i];
	sort(dat+1,dat+1+n);
    dat[n+1] = 1e12+7;
	for(long long i = 1;i <= n;i++){
		x+=dat[i];
		if(x/i<=dat[i+1]){
			cout<<x/i<<endl;
            return;
		}
	}
}

int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}