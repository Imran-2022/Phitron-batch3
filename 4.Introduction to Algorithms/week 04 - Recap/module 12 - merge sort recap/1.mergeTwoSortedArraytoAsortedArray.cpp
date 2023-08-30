#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int *arr1, int n, int *arr2, int m)
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        arr[k++] = arr1[i++];
    }
    while (j < m)
    {
        arr[k++] = arr2[j++];
    }
}

int main()
{
    int arr1[4] = {1, 2, 3, 4};
    int arr2[6] = {1, 3, 6, 8, 10, 12};
    int newarr[10];

    merge(newarr, arr1, 4, arr2, 6);

    for (int i = 0; i < 10; i++)
    {
        cout << newarr[i] << " ";
    }
    return 0;
}