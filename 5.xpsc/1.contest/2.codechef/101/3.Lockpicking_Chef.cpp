#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s1, s2;
    cin >> s1 >> s2;
    int result = INT_MAX;
    for (int i = 0; i < n - k + 1; i++)
    {
        int cnt = 0;
        for (int j = 0; j < k; j++)
        {
            int xx = abs(s1[i + j] - s2[j]);
            int val = min(xx, 10 - xx);
            cnt += val;
        }
        result = min(cnt, result);
        cnt = 0;
    }
    cout << result << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}