## 2d array -

#### what we will learn today ? 
```
1. 2d array.
2. 2d array input , output.
3. matrix,type of matrix.
4. prove array type using 2d array.
```
#### What is 2D Array
```

```
#### 2D Array Input and Output
```

```
#### 2D Array Printing by Row and Column
```

```

#### Types of Matrix
```
- row matrix,
- column matrix,
- zero matrix || null matrix,
- diagonal matrix,
- scalar matrix, (middle equal)
- unit matrix,

```
#### Zero or Null Matrix
```

```
#### Diagonal Matrix using 2D Array
```

```
#### Scalar Matrix using 2D Array

```

```
#### Unit Matrix using 2D Array

```

```



[https://www.includehelp.com/c-programs/c-programs-two-dimensional-array-or-matrix-programs.aspx]

#### 2D array 

```
data_type named_array [row size][column size];


```

###   C Program to Read and Print a RxC Matrix, R and C must be input by the User

```
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
      for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


input : 
4
4
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

output : 
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 

```

### C Program to Read a Matrix and find Sum and Product of all elements

```
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    int sum=0,product=1;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
      for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            sum+=arr[i][j];
            product*=arr[i][j];
        }
    }

    printf("sum: %d\n",sum);
    printf("product: %d\n",product);

    return 0;
}

input : 
3 3
1 1 1
2 2 2
3 3 3
output :
sum: 18
product: 216

```

### C Program to find Sum of all elements of each row of a matrix

```
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        int sum = 0;

        for (int j = 0; j < b; j++)
        {
            sum+=arr[i][j];
        }
        printf("sum: %d\n", sum);
        sum=0;
    }

    return 0;
}

input : 
3 3
1 2 3
4 5 6
7 8 9
output: 
sum: 6
sum: 15
sum: 24

```

### C Program to Transpose a Matrix

```
[column as row, row as column that's it ]
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        int sum = 0;

        for (int j = 0; j < b; j++)
        {
            printf("%d ", arr[j][i]);
            
        }
        printf("\n");
    }

    return 0;
}

input: 
3 3
1 2 3
4 5 6
7 8 9

output: 
1 4 7 
2 5 8 
3 6 9 

```

### C Program to Read a Matrix and Print Diagonals
```
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        int sum = 0;

        for (int j = 0; j < b; j++)
        {
            if(i==j){
                printf("%d ", arr[i][j]);
            }else{
                printf("\t");
            }
            
        }
        printf("\n");
    }

    return 0;
}

input:
3 3
1 2 3
4 5 6
7 8 9
output:
1 		
	5 	
		9 

```

### C Program to find sum and subtraction of two matrices

```


```