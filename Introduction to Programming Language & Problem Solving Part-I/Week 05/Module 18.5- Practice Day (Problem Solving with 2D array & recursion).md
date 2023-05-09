### Topics: Recursion - 2D array

https://docs.google.com/document/d/1ufj9gqsj8HE-MtppADUojTdDjeWiaM9WHV_y8KP_PTA/edit

#### 

```
// sum of array element in recursive way - 

#include <stdio.h>

long long int sum(int arr[], int n) {
    if (n == 0) {
        return 0;
    } else {
        return arr[n-1] + sum(arr, n-1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%lld\n", sum(arr, n));
    return 0;
}

```