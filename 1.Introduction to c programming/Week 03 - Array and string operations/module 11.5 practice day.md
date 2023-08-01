<!-- practice day  -->

1. C. Compare https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C

```
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s%s", &a, &b);
    int val = strcmp(a, b); // return 1,-1,0 , 1 if a>b, -1 if b>a, 0 if a=b;
    if (val < 0)
    {
        printf("%s", a);
    }
    if (val > 0)
    {
        printf("%s", b);
    }
    if (val == 0)
    {
        printf("%s", b);
    }
    return 0;
}


```


2. K. Sum Digits https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K

```
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char ch[n];
    scanf("%s",&ch);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ch[i]-48;
    }
    printf("%d",sum);
    return 0;
}


```

3. J. Count Letters https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

```

#include <stdio.h>
int main()
{
    char c;
    int count[26] = {0};
    while (scanf("%c", &c) != EOF)
    {
        count[c - 'a']++;
    }
    // 97 to 122
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (count[i - 'a'])
            printf("%c : %d\n", i, count[i - 'a']);
    }
    return 0;
}


```


4. V. Frequency Array https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

```

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int count[m+1];
    for (int i = 0; i <= m; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        count[a[i]]++;
    }

    for (int i = 1; i <= m; i++) {
        printf("%d\n", count[i]);
    }

    return 0;
}


```

