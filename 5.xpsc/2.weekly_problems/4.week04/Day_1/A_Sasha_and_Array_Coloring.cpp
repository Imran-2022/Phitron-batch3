#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vt(n);
    for (int i = 0; i < n; i++)
        cin >> vt[i];
    sort(vt.begin(), vt.end());
    int cnt = 0;
    int i = 0, j = n - 1;
    while (i <= j)
    {
        cnt += vt[j--] - vt[i++];
    }
    cout << cnt << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}