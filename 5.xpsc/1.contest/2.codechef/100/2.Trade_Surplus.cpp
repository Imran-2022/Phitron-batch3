#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, z, w;
    cin >> x >> y >> z >> w;
    if (x + z < y + w)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}