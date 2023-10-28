/**
* author : _Grandmaster
* created : 28-10-2023 23:48:29
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
    ll l,r,m,ans,last;
	ll stalls[100000];
    int n;
		int c;
		cin >> n >> c;

		for (int i = 0; i < n; ++i)
			cin >> stalls[i];

		sort(stalls, stalls + n);
		
		l = 0;
		ans = 0;
		r = stalls[n - 1] - stalls[0];
		while (l < r)
		{
			int cows = 1;
			last = stalls[0];
			m = (l + r) >> 1LL;
		
			for (int i = 1; i < n; ++i)
			{
				if (stalls[i] - last >= m)
				{
					++cows;
					last = stalls[i];
				}
			}

			if (c <= cows)
			{
				ans = m;
				l = m + 1;
			}
			else
				r = m;
		}
		
		cout << ans << "\n";
	}

int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}