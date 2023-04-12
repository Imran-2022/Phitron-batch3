#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    int A[N];
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        sum += A[i];

    }
    if (sum <= 0)
    {
        printf("%d", sum*(-1));
    }
    else
    {
        printf("%d", sum);
    }
    return 0;
}
