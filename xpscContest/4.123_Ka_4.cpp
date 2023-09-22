#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            if (i == 1)
            {
                cout << j;
            }
            else if (i == n)
            {
                cout << n;
            }
            else
            {
                if (j == 1)
                {
                    cout << i;
                }

                else if (j == n)
                {
                    cout << n;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
        solve();
    return 0;
}