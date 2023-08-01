### module 14.5 - week 04 practice day 01.md

1.P. Shape1 https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P
```
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i =n; i >=0; i--)
    {
        for (int j = i; j >0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


```

2. T. Shape2 https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T

```
#include <stdio.h>
int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = n - s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        k=k+2;
        s--;
        printf("\n");
    }
    return 0;
}

```

3. W. Shape3 https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W

```
#include <stdio.h>
int main()
{
    int n, s, k;

    // s for space,
    // k for star,

    scanf("%d", &n);
    s = n - 1;
    k = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int b = 0; b < k; b++)
        {
            printf("*");
        }

        s--;
        k += 2;
        if(i==n-1){
            s++;
            k-=2;
        }

        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int b = 0; b < k; b++)
        {
            printf("*");
        }

        s++;
        k -= 2;

        printf("\n");
    }
    return 0;
}


```


4. H. Sorting https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H

```
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
    // ascending order -
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // printf("%d %d \n",arr[i],arr[j]);
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

```


### others practice problems -
-  https://docs.google.com/document/d/1MbaqPOAm9nUAMxrwR4vxARDMwtkS_SnHVarKeMDdsV8/edit
