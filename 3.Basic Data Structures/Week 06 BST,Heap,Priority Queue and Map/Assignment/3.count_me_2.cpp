#include <bits/stdc++.h>
using namespace std;

pair<long long int, int> findMaxCount(long long int arr[], int n)
{
    map<long long int, int> mp;
    int i = 0;
    while (n--)
    {
        mp[arr[i]]++;
        i++;
    }
    long long int val = arr[0];
    int maxCount = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        // cout<<it->first<<" "<<it->second<<" "<<endl;
        if (it->second > maxCount || (it->second == maxCount && it->first > val))
        {
            val = it->first;
            maxCount = it->second;
        }
    }
    return make_pair(val, maxCount);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        auto maxCount = findMaxCount(arr, n);
        cout << maxCount.first << " " << maxCount.second << endl;
    }
    return 0;
}