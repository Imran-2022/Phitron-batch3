#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int s = 0;
    int e = n - 1;
    bool find = false;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == x)
        {
            find = true;
            break;
        }
        if (arr[mid] < x)
            s = mid + 1;
        if (arr[mid] > x)
            e = mid - 1;
    }
    if (find)
        cout << "Yes, found " << endl;
    else
        cout << "Not Found " << endl;
    return 0;
}