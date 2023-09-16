#include <bits/stdc++.h>
using namespace std;

void swap(int *a1, int *a2)
{
    int tmp = *a1;
    *a1 = *a2;
    *a2 = tmp;
}

int partision(int *arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quick_sort(int *arr, int i, int j)
{
    if (i < j)
    {
        int pivot_index = partision(arr, i, j);
        quick_sort(arr, i, pivot_index - 1);
        quick_sort(arr, pivot_index + 1, j);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}