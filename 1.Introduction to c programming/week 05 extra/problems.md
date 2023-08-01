link : https://docs.google.com/document/d/13oYIjNh9cQaZyZ-laL51xgBzJ7CxXGeRfaSg7tQMn6U/edit?fbclid=IwAR0X4VqCQa7s0qXLXQiUNbJqvE1ToIii4TIzIc_0q0NjTCOnPVC7IvzJDVw

solve : [https://github.com/abdullahallnaim/practice-problems-solution/tree/master]

problem 1 [solved] : E. Interval Sweep [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E]

```
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (abs(a - b) > 1 || a == 0 && b == 0)
    {
        printf("NO");
    }
    else if (abs(a - b) == 1 || abs(a - b) == 0)
    {
        printf("YES");
    }
    return 0;
}

```
problem 2 [solved] : B. Drawing 'X' [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B]

```
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i || j == n - i - 1)
            {
                if (j == n / 2)
                {
                    printf("X");
                }
                else if (j == i)
                {
                    printf("\\");
                }
                else
                {
                    printf("/");
                }
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

```
problem 3 : C. Finding Minimums [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C]

```
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int j = 0;
    while(j+k <= n) {
        int min = arr[j];
        for(int i=j; i<j+k; i++) {
            if(arr[i] < min) {
                min = arr[i];
            }
        }
        printf("%d ", min);
        j += k;
    }
    if(j < n) {
        int min = arr[j];
        for(int i=j; i<n; i++) {
            if(arr[i] < min) {
                min = arr[i];
            }
        }
        printf("%d", min);
    }
    return 0;
}


```
problem 4 [solved] : D. Range Sum [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D]

```
#include <stdio.h>
#include <math.h>
// n*(n+1)/2
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        long long int L, R;
        scanf("%lld %lld", &L, &R);
        long long int sum = 0;
        if (R > L)
        {
            sum = R*(R+1 )/2 - (L-1)*L/2;
        }
        else
        {
            sum = L*(L+1)/2 - (R-1)*R/2;
        }
        printf("%lld\n", sum);
    }
    return 0;
}

```
problem 5 : B. Reversing [https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/B]

```
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            // Reverse all elements before index i
            for (int j = 0; j < i/2; j++) {
                int temp = a[j];
                a[j] = a[i-j-1];
                a[i-j-1] = temp;
            }
        }
    }

    // Print the final order of the array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}


```
problem 6 : D. Counting Elements [https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D]

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
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
     int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] + 1 == arr[j])
            {
                count += 1;
                break;
            }
        }
    }
    printf("%d", count);
   
    return 0;
}


```
problem 7 : F. Break Number [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B]

```
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        int mx = 0;
        while (arr[i])
        {
            if (arr[i] % 2 == 0)
            {
                mx += 1;
            }
            else
            {
                break;
            }
            arr[i] /= 2;
        }
        if (mx > max)
        {
            max = mx;
        }
    }
    printf("%d", max);

    return 0;
}

```

problem 8 : G. Even Hate Odd [https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G]

```
#include <stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, odd_count = 0, even_count = 0;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }

        if (odd_count == even_count)
        {
            printf("0\n");
        }
        else if (n % 2 != 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n",abs(even_count-odd_count)/2);
        }
    }
    return 0;
}

```

problem 9 : F. Front - End [https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F]

```
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int front = 0, end = n - 1;
    while (front <= end)
    {
        printf("%d ", a[front++]);
        if (front <= end)
        {
            printf("%d ", a[end--]);
        }
    }

    return 0;
}


```

problem 10[solved] : O. Sort String [https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O]

```
#include<stdio.h>

// asci a= 97
// asci A=65

int main()
{
    int arr[26]={0};
    int n;
    scanf("%d",&n);
 
    for(int i=0;i<n;i++){
        char cc;
        scanf(" %c",&cc);
        arr[(int)cc-97] ++;
    }
    for(int i=0;i<26;i++){
        while(arr[i]!=0){
            printf("%c",i+97);
            arr[i]--;
        }
    }
    return 0;
}


```