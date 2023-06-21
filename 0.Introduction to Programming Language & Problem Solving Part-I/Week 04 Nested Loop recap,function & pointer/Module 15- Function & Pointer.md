### Module 15: Function & Pointer

```
what to learn - 

1. pointer .
2. call by value, call by reference .
3. array and pointer relation .
4. function are modde array and string . how it work .
5. function a array - call by reference .

```

```
nice code - 
304505
sum : 17

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    while (n)
    {
        // printf("%d\n",n);
        sum+=n%10;
        n/=10;

    }
    printf("sum : %d",sum);
    return 0;
}

```

```
price after 10% discount 50 real value ki?
-

If the price after a 10% discount is 50, then the original price before the discount would be:

Original price = Price after discount / (1 - Discount)
Original price = 50 / (1 - 0.10)
Original price = 55.56 (rounded to two decimal places)

Therefore, the real value of the item is 55.56.


-
price 55.56 and after 10% discound, price?

-
If the original price of an item is 55.56 and there is a 10% discount, then the discounted price would be:

Discounted price = Original price - (Discount rate * Original price)
Discounted price = 55.56 - (0.10 * 55.56)
Discounted price = 49.9984 (rounded to two decimal places)

Therefore, the discounted price after a 10% discount would be approximately 49.9984. However, it's important to note that depending on the store's policies, the final price may be rounded up or down to the nearest cent.


```



#### Pointers in C
```
how pointer work ? 

*ptr -> dereference . 
-
#include <stdio.h>
int main()
{   
    int x=10;
    int *ptr=&x;
    printf("%d",ptr);
    return 0;
}
-
// change the value in the location.
#include <stdio.h>
int main()
{
    int x = 10;
    int *ptr = &x;
    *ptr = 12;
    printf("%d", x);
    return 0;
}
-
pointer takes 4 bytes to store address.
-
#include <stdio.h>
int main()
{
    int x = 10;
    int *ptr = &x;
    printf("%p\n", &x);// x ar address
    printf("%p\n", ptr); // x ar address that ptr hold
    printf("%p\n", &ptr); // ptr are address .
    printf("%d\n", *ptr); // ptr holded address  value .
    printf("%d\n", sizeof(ptr)); // size of ptr=4 .
    return 0;
}

-
double *ptr=&x;
here guess the size of ptr !!!
-

```

#### Call By Value 

- (just pass value and will copied to paramter ! )
- pass by value -

```
guss what -? 
here int x, fun(int x) two different variable have different address in memory.
- 
#include <stdio.h>
int fun(int x){
    x=100;
}
int main()
{
    int x=10;
    fun(x);
    return 0;
}
-

```

#### Call By Reference -

- pass by reference . 
- guess the implementation.

```
#include <stdio.h>
int fun(int* x){
    *x=100;
}
int main()
{
    int x=10;
    fun(&x);
    printf("%d",x);
    return 0;
}

```
#### Array and Pointer

```
guess what ? you know, if you know !
-
#include <stdio.h>
int main()
{
    int arr[5]={1,2,3,4};
    printf("%p\n",&arr[0]);
    printf("%p\n",arr);
    printf("%d\n",arr[0]);
    printf("%d\n",*arr);
    printf("%d\n",*(arr+1));
    printf("%d\n",3[arr]); 
    // 3[arr]= *[3+arr] // wow amazing work behind the scene.
    // also arr[3]= *[arr+3] both same .
    // what's why we can say , array itself is a pointer. 
    return 0;
}
-

```
#### Function and Array

```
- 
return korle return ar upreer sob delete hoye jai memory theke . 
-
both same , int arr[], int* arr(o tomo index ar pointer)
-

#include <stdio.h>
int myfun(int arr[],int x){

}
int main()
{
    int arr[5]={};
    myfun(arr,5);
    return 0;
}

-

#include <stdio.h>
int myfun(int* arr,int x){

}
int main()
{
    int arr[5]={};
    myfun(arr,5);
    return 0;
}


```
#### Function and String

- have difference in function and array , function and string.

```
#include <stdio.h>
#include<string.h>

void fun(char ch[]){
    printf("%d",strlen(ch));
}
int main()
{
    char ch[20]="hello";
    fun(ch);
    return 0;
}

-

#include <stdio.h>
#include<string.h>

void fun(char *ch){
    printf("%d",strlen(ch));
}
int main()
{
    char ch[20]="hello";
    fun(ch);
    return 0;
}


```

#### Function with Array as Reference

```
- array work like call by reference . 

#include <stdio.h>
int mayArray(int *arr,int x){
    arr[4]=333; // will be change orginal array ! 
}
int main()
{
    int arr[5]={1,2,3,4,5};
    mayArray(arr,5);
    printf("%d",arr[4]);
    return 0;
}

-

#include <stdio.h>
int myfun(char *ch){
    ch[0]="i";
}
int main()
{
    char ch[]="hello";
    myfun(ch);
    printf("%s",ch);
    return 0;
}



```