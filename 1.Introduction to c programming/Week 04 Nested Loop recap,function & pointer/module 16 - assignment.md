[q docs - https://docs.google.com/document/d/14Ih9s2ifG9ZNjDvgIlXfDGHZ8ye6VeE4JGRGQudyFsY/edit#]


### 1. 
```
#include <stdio.h>
int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = 1;
    for (int i = 0; i <= (2 * n - 1); i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("%d", j);
        }
        // condition ;
        if (i < n - 1)
        {
            s--;
            k += 2;
        }
        else
        {
            s++;
            k -= 2;
        }
        printf("\n");
    }
    return 0;
}
```

### 2 

```
#include <stdio.h>
int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = n - s;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("%d",i);
        }
        k++;
        s--;
        printf("\n");
    }
    return 0;
}


```

### 3

```
#include <stdio.h>

int count_before_zero(int* arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            count+=1;
        }else{
            break;
        }
    }
    return count;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",count_before_zero(arr,n));

    return 0;
}

```
### 4 

```
#include <stdio.h>
int return_parameter(int n)
{
    return n * 2;
}
int return_noparameter(void)
{
    int x = 5;
    return x * 2;
}
void noreturn_parameter(int n)
{
    int x = 5;
    int doubleX = x * 2;
    printf("%d ", doubleX);
}
void noreturn_noparameter(void)
{
    int x = 5;
    int xDouble = x * 2;
    printf("%d ", xDouble);
}
int main()
{
    // 1. Has Return + Parameter

    int doubleValue = return_parameter(5);
    printf("%d ", doubleValue);

    // 2. Has Return + No Parameter

    int val = return_noparameter();
    printf("%d ", val);

    // 3. No Return + Parameter

    noreturn_parameter(2);

    // No Return + No Parameter

    noreturn_noparameter();

    // end ...........
    return 0;
}

```

#### 5

```
#include <stdio.h>
#include <string.h>

int is_palindrome(char ch[])
{
    int len = strlen(ch);
    for (int i = 0; i < len / 2; i++)
    {
        if (ch[i] != ch[len - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char word[105];
    scanf("%s", word);

    int flag = is_palindrome(word);

    if (flag == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}

```


#### 6

// pass by value : the function will receives a copy of the arguments. any changes to arguments within the function do not affect the orginal vlaue.

// example of pass by value : 

#include <stdio.h>
int dx(int x){
    x=44;
}
int main()
{
    int x=5;
    dx(x);
    printf("%d",x);
    return 0;
}

// here output will be still 5 as the change within the function do not affect the orginal vlaue , as pass by value ..

// pass by reference : the function will receives a reference to the memory location of that arguments, this allow the function to modify the orginal vlaue.

// example of pass by reference : 

#include <stdio.h>
int dx(int* x){
    x[0]=44;
}
int main()
{
    int x[1]={5};
    dx(x);
    printf("%d",x[0]);
    return 0;
}

// here output will be still 44 (changed) as the change within the function , modify the orginal value as pass by reference .

