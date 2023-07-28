#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    while (m--)
    {
        int x;
        cin >> x;
        int s = 0;
        int e = n - 1;
        bool flag = false;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (arr[mid] == x)
            {
                flag = true;
                break;
            }
            if (x > arr[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        if (flag)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}