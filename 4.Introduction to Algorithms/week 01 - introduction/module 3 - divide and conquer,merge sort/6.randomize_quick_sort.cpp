#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

int getRandomPivot(int low, int high)
{
    return low + rand() % (high - low + 1);
}

void reandomized_quicksort(int *arr, int low, int high)
{
    if (low < high)
    {
        int pivotIndex = getRandomPivot(low, high);
        swap(arr[pivotIndex], arr[high]);
        int pivot = partition(arr, low, high);

        reandomized_quicksort(arr, low, pivot - 1);
        reandomized_quicksort(arr, pivot + 1, high);
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

    reandomized_quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}