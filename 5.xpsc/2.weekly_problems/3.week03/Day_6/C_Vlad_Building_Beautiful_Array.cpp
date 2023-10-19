#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> even, odd;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even.push_back(a[i]);
        }
        else
        {
            odd.push_back(a[i]);
        }
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    bool okE = true, okO = true;

    // check for even

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            continue;
        if (odd.empty() or odd[0] >= a[i])
        {
            okE = false;
            break;
        }
    }

    // check for odd

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            continue;
        if (odd.empty() or odd[0] >= a[i])
        {
            okO = false;
            break;
        }
    }

    if (okE or okO)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}