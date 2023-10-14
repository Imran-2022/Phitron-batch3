#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll T; cin >> T;
    while (T--) {
        ll n; cin >> n;
        map <char, ll> f, s;
        map <string, ll> d;
        for (ll i = 0; i < n; i++) {
            string q; cin >> q;
            f[q[0]]++; s[q[1]]++;
            d[q]++;
        }
        ll ans = 0;
        for (auto i : f) {
            ans += i.second * (i.second - 1) / 2;
        }
        for (auto i : s) {
            ans += i.second * (i.second - 1) / 2;
        }
        for (auto i : d) {
            ans -= i.second * (i.second - 1);
        }
        cout << ans << '\n';
    }
    return 0;
}