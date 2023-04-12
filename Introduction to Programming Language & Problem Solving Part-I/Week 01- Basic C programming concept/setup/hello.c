#include <stdio.h>
int main()
{
    long long int eyes, mouths, bodies;
    long long int max = 0;
    scanf("%lld%lld%lld", &eyes, &mouths, &bodies);
    if (eyes <= 0)
    {
        max = 0;
    }

    if (eyes >= 1 && mouths >= 1 && bodies >= 1)
    {
        long long int min = eyes;
        if (bodies < min)
        {
            min = bodies;
        }
        if (mouths < min)
        {
            min = mouths;
        }

        max += min;

        eyes = eyes - min;
        mouths = mouths - min;
        bodies = bodies - min;
    }

    if (eyes >= 2 && bodies >= 1)
    {
        long long int min = eyes / 2;
        if (bodies < min)
        {
            min = bodies;
        }

        max += min;
    }

    printf("%lld", max);

    return 0;
}