#include <bits/stdc++.h>
using namespace std;

bool search(int x, int n, int arr[])
{
    int s = 0;
    int e = n - 1; // Initialize e to n - 1
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == x)
        {
            return true;
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
    return false;
}

int main()
{
    int n, t;
    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    while (t--)
    {
        int x;
        cin >> x;

        if (search(x, n, arr))
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
