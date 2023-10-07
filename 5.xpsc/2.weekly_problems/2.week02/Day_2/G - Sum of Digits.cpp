#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int ans = 1, n = 0, t, w;
    string s;
    cin >> s;
    if (s.size() == 1)
    {
        cout << "0";
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        n += s[i] - '0';
    }
    while (n > 9)
    {
        t = n, w = 0;
        while (t)
        {
            w += t % 10;
            t /= 10;
        }
        n = w;
        ans++;
    }

    cout << ans;
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
        solve();
    return 0;
}