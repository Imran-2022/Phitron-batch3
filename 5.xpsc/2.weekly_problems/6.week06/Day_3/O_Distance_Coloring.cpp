#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1000000007;

void solve() {
    ll n, m;
    cin >> n >> m;
    ll result = 1;
    for (ll i = 0; i < n; i++) {
        result = (result * m) % MOD;
        if (m > 1) m--;
    }
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
