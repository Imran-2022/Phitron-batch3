#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(i, a, n) for (int i = a; i < n; i++)
#define pb push_back
#define all(p) p.begin(), p.end()
#define rall(v) v.rbegin(), v.rend()
#define vi vector<int>

void start_here()
{
    int n;
    cin >> n;
    int res = 0;
    // even
    for (int i = 2; i <= n; i += 2)
    {
        for (int j = i + 2; j <= n; j += 2)
        {
            if (j % i != 0)res++;
            if(i % j != 0)res++;
        }
    }

    // odd
    for (int i = 3; i <= n; i += 2)
    {
        for (int j = i + 2; j <= n; j += 2)
        {
            if (j % i != 0 && i % j != 0)res+=2;
        }
    }

    cout << (res+1)/2 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    while (t--) start_here();
    return 0;
}