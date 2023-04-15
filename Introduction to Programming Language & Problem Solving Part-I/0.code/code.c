#include <stdio.h>
int main()
{
    int n;
    while ((scanf("%d", &n)) != EOF)
    {
        if (n == 1)
        {
            break;
        }
        printf("%d \n", n);
    }

    return 0;
}
