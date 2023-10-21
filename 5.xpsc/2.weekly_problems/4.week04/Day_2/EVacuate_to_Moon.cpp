#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m, h;
    cin >> n >> m >> h;
    vector<long long> vt(n);
    for (long long i = 0; i < n; i++)cin >> vt[i];
    vector<long long> vt2(m);
    for (long long i = 0; i < m; i++)cin >> vt2[i];
    sort(vt.begin(), vt.end(),greater<long long>());
    sort(vt2.begin(), vt2.end(),greater<long long>());

    long long cnt = 0;
    for (long long i = 0; i < min(m,n); i++)
    {
        cnt+=min(vt[i],vt2[i]*h);
    }
    cout<<cnt<<endl;
}

int main()
{
    long long t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}