#include <bits/stdc++.h>
#define ll long long
#define fl(i, a, n) for (int i = a; i < n; i++)
#define F first
#define S second
#define pb push_back
#define sz(x) ((int)x.size())
using namespace std;

ll cal(string s1, string s2) {
    int n = sz(s1);
    ll ret = 0;
    for (int i = 0; i < n; i++) {
        ret += min(abs(s1[i] - s2[i]), 30);
    }
    return ret;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> v(n);

    fl(i, 0, n) cin >> v[i];

    ll ans = LONG_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ans = min(ans, cal(v[i], v[j]));
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
