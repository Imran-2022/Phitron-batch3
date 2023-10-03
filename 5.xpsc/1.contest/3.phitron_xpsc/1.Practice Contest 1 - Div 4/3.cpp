#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    for (int i = 0; i < n - 2; i++)
    {
        if (arr[i] == arr[i + 1] &&arr[i+1] == arr[i + 2])
        {
            cout << arr[i] << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}