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
    int e1 = 0, e2 = 0, od1 = 0, od2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i] % 2 == 1)
                od1 = 1;
            else
                e1 = 1;
        }
        else
        {
            if (arr[i] % 2 == 1)
                od2 = 1;
            else
                e2 = 1;
        }
    }

    if (e1 && od1) cout<<"NO"<<endl;
    else if(e2 && od2)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}