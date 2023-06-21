#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    int sum=0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = N-1; i >=0; i--)
    {
        printf("%d ", arr[i]);
        sum+=arr[i];
    }
    printf("\nthe sum is %d", sum);
    return 0;
}