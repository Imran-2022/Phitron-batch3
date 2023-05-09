### module 17 

```
1. call stack.
2. recursion.
3. recursion dea printing.
4. reverse way recursion.
5. print array using recursion.
6. string length using recursion.


```

#### call stack

```
like plate, last in first out. same function stack .
see note .

```
#### What is Recursion

```

```

### Print From 1 to 5 Using Recursion

```
#include <stdio.h>

void aToFive(int x)
{
    printf("%d\n", x);
    if (x >= 5)
        return;
    aToFive(x + 1);
}

int main()
{
    aToFive(1);
    return 0;
}

```
#### Print From 5 to 1 using Recursion

```
#include <stdio.h>

void aToFive(int x)
{
    if (x ==0) return;
    printf("%d\n", x);
    aToFive(x - 1);
}

int main()
{
    aToFive(5);
    return 0;
}

```
### Array Printing using Recursion

```
#include <stdio.h>
void myfun(int* arr,int n,int i){
    if(i==n)return;
    printf("%d\n",arr[i]);
    myfun(arr,n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    myfun(arr,n,0);
    return 0;
}

```

###  Print From 5 to 1 in Reverse Way
```
#include <stdio.h>
void myfun(int i){
    if(i==6)return;
    myfun(i+1); // waiting .
    printf("%d\n",i);
}
int main()
{
    myfun(1);
    return 0;
}

```

#### Length of a String using Recursion

```

```

### recursion in c

```
Definition of recursion.
Program to demonstrate recursion.
-
recursion is a process in which a function calls itself directly or indirectly
-
int fun(){
    // code....
    fun();
}
this is nothing but recursion.
-
#include <stdio.h>
int myFun(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + myFun(n - 1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", myFun(n));
    return 0;
}

-

#include <stdio.h>
int odd(int n);
int even(int n);
int even(int n)
{
    if (n <= 10)
    {
        printf("%d ", n - 1);
        n++;
        odd(n);
    }
}
int odd(int n)
{
    if (n <= 10)
    {
        printf("%d ", n + 1);
        n++;
        even(n);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    odd(n);
    return 0;
}

-



```
