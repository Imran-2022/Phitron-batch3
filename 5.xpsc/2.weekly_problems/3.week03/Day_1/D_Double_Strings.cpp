#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
	cin >> n;
	string s[n];
	map<string, bool> mp;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
		mp[s[i]] = true;
	}
	for (int i = 0; i < n; i++) {
		bool ok = false;
		for (int j = 1; j < s[i].length(); j++) {
			string pref = s[i].substr(0, j), suff = s[i].substr(j, s[i].length() - j);
			if (mp[pref] && mp[suff]) {ok = true;}	
		}
		cout << ok;
	}
	cout << '\n';
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}