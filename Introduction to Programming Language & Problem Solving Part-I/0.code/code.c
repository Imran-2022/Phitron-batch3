#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m;
    scanf("%d", &m);
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int newarr[n + m];
    for (int i = 0; i < n; i++)
    {
        newarr[i]=arr[i];
    }
    for (int i = n; i < m+n; i++)
    {
        newarr[i]=arr2[i];
    }

    for (int i = 0; i < n+m; i++)
    {
        printf("%d ", newarr[i]);
    }

    return 0;
}
