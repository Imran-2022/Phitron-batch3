#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vt(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i];
        mp[vt[i]]++;
    }
    int present = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[vt[i]] > 1)
        {
            present = max(present, i + 1);
            mp[vt[i]]--;
        }
    }
    cout << present << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}