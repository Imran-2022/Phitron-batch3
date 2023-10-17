#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int m, s;
    cin >> m >> s;
    vector<int> arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;

    set<int> values_set(arr.begin(), arr.end());

  
    for (int i = 1; i <1000; i++)
    {
        
        if (values_set.find(i) == values_set.end())
        {
            arr.push_back(i);
            cnt += i;
        }
        if (cnt == s){
            break;
        }
        if (cnt > s)
        {
            cout << "NO" << endl;
            return;
        }
    }

    sort(arr.begin(), arr.end());

    bool flag = true;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[i - 1] + 1)
        {
            flag = false;
            break;
        }
    }
    if (arr.size() == m)
        flag = false;

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}