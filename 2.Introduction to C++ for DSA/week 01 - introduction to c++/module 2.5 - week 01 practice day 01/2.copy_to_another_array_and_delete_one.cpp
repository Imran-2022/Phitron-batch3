#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    int *newA = new int[m];
    for (int i = 0; i < n; i++)
    {
        newA[i] = arr[i];
    }
    delete[] arr;
    for (int i = n; i < m; i++)
    {
        cin >> newA[i];
    }
    for (int i = 0; i < m; i++)
    {
        cout << newA[i] << " ";
    }

    return 0;
}