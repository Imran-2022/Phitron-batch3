### 2-0 Introduction.
```
1. stack and heap memory 
2. why dynamic memory .
3. how to create data in dynamic memory.
4. dynamic array . [ two work that Not Possible in static array]
5. ternary operator .(if else shortcut)
```

### 2-1 Stack and Heap Memory.
```
1. stack memory - compile time [no way to extend memory , if needed !]
2. heap memory(dynamic memory) -run time

- stack and heap memory difference

In computer science, the stack and heap are two regions of memory used for storing data during program execution.

The stack is a region of memory that is allocated automatically by the operating system when a program is started. It is used to store local variables and function parameters of a program in a last-in-first-out (LIFO) order. When a function call is made, the return address and the arguments of the function are pushed onto the stack. When the function returns, these values are popped off the stack. The size of the stack is fixed and determined at compile time.

On the other hand, the heap is a region of memory that is allocated dynamically during runtime to store data that needs to persist beyond the lifetime of a function call or to store large data structures that cannot fit on the stack. Memory allocated on the heap is not automatically managed like the stack, and the programmer must explicitly allocate and deallocate memory. The size of the heap is not fixed and can change during runtime.

In summary, the key differences between the stack and heap are:

The stack is a fixed-size region of memory that is automatically managed by the operating system, while the heap is a dynamic region of memory that is manually managed by the programmer.
The stack is used to store local variables and function parameters in a LIFO order, while the heap is used to store data that needs to persist beyond the lifetime of a function call or large data structures that cannot fit on the stack

```

### 2-2 Create Data in Dynamic Memory.
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int; // syntax ,
    *a = 10;
    float *f=new float;
    *f=12.12;
    cout<<*f<<endl;
    cout << a <<endl<< *a << endl;
    return 0;
}

```

### 2-3 Create Dynamic Array

```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
```

### 2-4 Increase Size using Dynamic Array
```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *arr1 = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr1[i];
    }

    int *arr2 = new int[7];

    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr1[i];
    }

    arr2[5] = 60;
    arr2[6] = 70;
    delete[] arr1;// if it's not an array than just use delete keyword. that's it . 

    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    return 0;
}

```


### 2-5 Why We Need Dynamic Memory Animated

```

```


### 2-6 Return Dynamic Array from Function
```
// Return Dynamic Array from Function

#include <iostream>
using namespace std;

int* myArr() {
    int* arra = new int[5]{1,2,3,4,5};
    return arra;
}

int main() {
    int* arr = myArr();
    for(int i=0; i<5; i++) {
        cout << arr[i] << endl;
    }
    delete[] arr; // deallocate the memory
    return 0;
}

```


### 2-7 Return Dynamic Array from Function Animated
```

```


### 2-8 Ternary Operator
```
- just sortcut of if-else.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 4;
    int b = 11;
    a>b?cout << "HI" << endl:cout << "hellow" << endl;
    return 0;
}

```

### 2-9 Summary
```

```
