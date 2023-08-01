#### 15.5 practice day .

 [docs link : https://docs.google.com/document/d/15K3rTJ75RSKmd8ZFe36baYK8V9e8L3QpnlTvui7wopg/edit]

### A. Add : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/Avvvvvvvv

```
#include <stdio.h>
int sum(int x,int y){
    return x+y;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",sum(x,y));
    return 0;
}


```

### B. Print https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B

```
#include <stdio.h>
int sum(int x){
    for(int i=1;i<=x;i++){
        if(x!=i){
            printf("%d ",i);
        }else{
            printf("%d",i);
        }
    }
}
int main()
{
    int x;
    scanf("%d",&x);
    sum(x);
    return 0;
}


```

### G. Max and MIN : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G

```
#include <stdio.h>

int min(int *arr, int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int max(int *arr, int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d %d", min(arr, n), max(arr, n));
    return 0;
}


```

### https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T  [solve later]

```


```