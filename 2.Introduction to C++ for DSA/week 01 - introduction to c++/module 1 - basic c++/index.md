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



### 1-0 Introduction

```
1. c++ setup.
2. c++ input output.
3. c++ buildin function.
4. switch case .
5. string intput in c++.
6. common header file.
7. sinppet setup.

```

### 1-1 C++ Setup

```
in code runner .

```
### 1-2 How to Print in C++

```


```
### 1-3 How to Take Input in C++

```
cin >>
cout <<

```
### 1-4 Setprecision in C++

```
#include <iostream>
#include <iomanip>// input output manipulation.
using namespace std;
int main()
{
    float abc;
    cin >> abc;
    cout << fixed << setprecision(2) << abc << endl;
    return 0;
}

```
### 1-5 Switch Case in C++

```
- contidional statement. 
- 
#include<iostream>
using namespace std;
int main()
{
    int v;
    cin>>v;
    switch(v)
    {
        case 1:
            cout<<"One"<<endl;
            break;
        case 2:
            cout<<"Two"<<endl;
            break;
        case 3:
            cout<<"Three"<<endl;
            break;
        case 4:
            cout<<"Four"<<endl;
            break;
        case 5:
            cout<<"Five"<<endl;
            break;
        default:
            cout<<"Didn't maatch"<<endl;
    }
    return 0;
}

```
### 1-6 min() and max() Built-in function in C++

```
- #include<algorithm>
min(a,b)
max(a,b)

```
### 1-7 swap() Built-in Function in C++

```
- #include<utility>
swap()

```
### 1-8 String Input and Output in C++

```
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char ch[100];
    cin.getline(ch,100);// like fgets but no need stdin .
    // it's not take enter . 
    cout<<ch<<endl;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ss;
    getline(cin,ss);
    cout<<ss<<endl;
    return 0;
}

```

### 1-9 Header File and Snippet Setup

```

- #include<bits/stdc++.h> // collect all headerfile of c and c++;

```

### 1-10 Summary

```


```