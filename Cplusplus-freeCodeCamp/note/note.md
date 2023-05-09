#### our first c++ program : 


### shortcut - 

```
in vs code , press ctrl+r to back to any folder in vs code  awasome.!!
```

```
#include <iostream>

int main() {
    std::cout << "Hello World!"<<std::endl;
    return 0;
}

#explain : 

The #include <iostream> directive at the beginning of the program is a preprocessor directive that tells the compiler to include the contents of the iostream standard library header file in the program.

This header file provides definitions for input and output operations, such as std::cout and std::cin, which are used to read from and write to the console.

In other words, by including this header file in our program, we gain access to the necessary functions and objects for performing I/O operations on the console.

By including the iostream header file in our program, we can use its declarations to access the functionality provided by the cout and cin objects without having to write out their entire definitions ourselves. This saves us time and effort and makes our code more readable and maintainable.

In C++, std is a namespace that contains many of the standard library functions, including cout.

cout is an object in the std namespace that represents the standard output stream. When you write std::cout, you're telling the compiler to look for the cout object within the std namespace.

The line std::cout << "Hello World!"<<std::endl; uses the << operator to insert the string "Hello World!" into the cout object, which then outputs the string to the console.

The std::endl at the end of the line is a manipulator that inserts a newline character (\n) into the output stream and flushes it. This ensures that any text still in the output stream is displayed on the console before the program exits.

Finally, the return 0; statement indicates that the program has completed successfully and returns a value of 0 to the operating system.


```

#### comments in c++

```
// for single line comment 
/* 
for multi-line comment 
*/

```

#### Errors and warnings 

```
compile time errors - like missing ;
runtime errors - can crash (unexpected output.)
warnings

```

### statements and functions - 
```
#include <iostream>
using namespace std;
int abc(int a,int b){
    return a+b;
}

int main()
{
    int a{3}; // another way to declare variable
    int b{3};
    int myfun=abc(a,b); // function.
    cout<<myfun<<endl;
    return 0;
}
```

