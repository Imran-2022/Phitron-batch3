#### April 03
```

infinity loop --- what to do !!

- anser can be - 

1. accepted.
2. wrong anser.
3. compilation error.

```




 ### practice contest hackerrank 

https://www.hackerrank.com/contests/batch-03-a-c-programming-a-module-3-5-practice/challenges


#### solution 1 . [I Love Practice]

```
#include <stdio.h>

int main() {
    printf("I Love Practice");
    return 0;
}


```

### solution 2 . [Sum of Two Numbers]

```
#include <stdio.h>

int main() {
    int A,B;
    scanf("%d%d",&A,&B);
    printf("%d",A+B);
    return 0;
}

```

### solution 3 . [N Times]

```
#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        printf("I Love Practice\n");
    }
    return 0;
}

```

### solution 4 . [Variables]

```
#include <stdio.h>


int main() {
    
    int A;
    long int B;
    float C;
    char D;
    scanf("%d%ld%f %c", &A, &B, &C, &D);
    printf("%d\n%ld\n%.2f\n%c",A,B,C,D);
    return 0;
}

```

### solution 5 [Divisible By 5 or Not]

```
#include <stdio.h>

int main() {
    
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
          printf("%d\t",i);
        if(i%5==0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}


```