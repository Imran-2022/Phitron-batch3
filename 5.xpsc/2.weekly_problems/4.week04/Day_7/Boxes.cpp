#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;

    vector<int> bits(64, 0);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 64; j++)
        {
            if ((v[i] >> j) & 1)
            {
                bits[j]++;
            }
        }
    }
    ll cnt = 0;
    for (int i = 63; i >= 0; i--)
    {
        if (bits[i])
        {
            cnt = bits[i];
            break;
        }
    }
    int ans = ceil(cnt*1.0 / 2);
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)solve();
    return 0;
}