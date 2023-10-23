#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll ans = 0;
        while (n != 0)
        {
            ans += n;
            n /= 2LL;
        }

        cout << ans << endl;
    }
    return 0;
}
