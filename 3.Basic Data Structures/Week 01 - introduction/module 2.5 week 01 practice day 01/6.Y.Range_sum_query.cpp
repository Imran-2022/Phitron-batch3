#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, t;
    cin >> n >> t;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll rangedArr[n];
    rangedArr[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        rangedArr[i] = rangedArr[i - 1] + arr[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << rangedArr[i] << " ";
    // }

    while (t--)
    {
        int s, e;
        cin >> s >> e;
        s--;
        e--;
        if (s == 0)
            cout << rangedArr[e] << endl;
        else
        {
            cout << rangedArr[e] - rangedArr[s - 1] << endl;
        }
    }

    return 0;
}