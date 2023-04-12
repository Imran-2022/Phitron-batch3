#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%ld", &A[i]);
        if(A[i]<=10){
            printf("A[%d] = %d\n",i, A[i]);
        }
    }
    return 0;
}
