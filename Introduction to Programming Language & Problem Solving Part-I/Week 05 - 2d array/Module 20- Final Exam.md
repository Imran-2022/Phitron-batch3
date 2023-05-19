## final Exam Code - 
[
    https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-03/challenges
]

## 1 .

```
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        long long int sum, x, y, z;
        scanf("%lld %lld %lld %lld", &sum, &x, &y, &z);
        long long int missing=sum -(x + y + z);
        printf("%lld\n",missing);
    }
    return 0;
}


```

## 2 - 

```
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && arr[i][j] != 1)
            {
                flag = 0;
                break;
            }
            else if (i != j && arr[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

```

## 3 - 

```
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int max[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &max[i][j]);
        }
    }
    for (int j = 0; j < m; j++)
    {
        printf("%d ", max[n - 1][j]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", max[i][m - 1]);
    }
    return 0;
}

```

### 4

```
#include <stdio.h>
#include <string.h>

int main()
{
  char ch[1001];
  int s = 0, c = 0, sp = 0;
  fgets(ch, 1001, stdin);

  for (int i = 0; ch[i] != '\0'; i++)
  {
    if (ch[i] >= 'a' && ch[i] <= 'z')
    {
      s++;
    }
    else if (ch[i] >= 'A' && ch[i] <= 'Z')
    {
      c++;
    }
    else
    {
      sp++;
    }
  }

  printf("Capital - %d\n", c);
  printf("Small - %d\n", s);
  printf("Spaces - %d\n", sp);

  return 0;
}
```

### 5 

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
           if(i%2==0){
             printf("^");
           }else{
             printf("*");
           }
        }
        k=k+2;
        s--;
        printf("\n");
    }
    return 0;
}
```

### 6

```
#include <stdio.h>

int main()
{
    int n, n1, n2, t = 0, p = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &n1, &n2);

        if (n1 > n2)
        {
            t++;
        }
        else if (n2 > n1)
        {
            p++;
        }
    }

    if (t > p)
    {
        printf("Tiger\n");
    }
    else if (p > t)
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }

    return 0;
}
```

### 7
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

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    if (n % 2 == 0)
    {
        printf("%d %d", arr[n / 2 - 1], arr[n / 2]);
    }
    else
    {
        printf("%d", arr[(n + 1) / 2 - 1]);
    }
    return 0;
}


```