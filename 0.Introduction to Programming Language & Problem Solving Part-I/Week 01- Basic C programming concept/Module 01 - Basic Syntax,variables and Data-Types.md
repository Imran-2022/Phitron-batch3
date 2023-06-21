#### April 01

1. c programming basic structure,
2. c program output
3. variable,data type.
4. take input from user.
5. data type limitation.
6. variable naming system.

##### stdio - standard input output . headerfile.
```

return_type name()
{
    return;
}

```

- %, / special character ! they have some special use that's why ! 
- \n - new line
- \t - tap
- \a - tune

### variable and datatype - 

``` 
In C programming language, a variable is a named storage location in the memory that can hold a value of a particular data type. It allows you to store and manipulate data at runtime.

Variables are declared with a specific data type, such as int, float, char, double,bool etc., which specifies the type of data that can be stored in that variable. The syntax for declaring a variable in C is:

data_type variable_name;
For example, to declare an integer variable called "age", you would write:

int age;
After declaring a variable, you can assign a value to it using the assignment operator "=":

age = 30;
You can also declare and initialize a variable in a single statement:

int age = 30;

```


```
1byte=8bit
 1kb = 1024 byte
1mb = 1024 kb.
1gb=1024 mb(mega byte)

= assignment overator . 
int rahim= 10;

format specifier ->  %,& etc. (use in input output );

int - %d
float - %f
char - %c


printf("%d"); will give us random Garbage vlaue . 

Garbage collection is the process of automatically freeing up memory that is no longer being used by the program. In languages like C, where manual memory management is required, it is the responsibility of the programmer to explicitly free any memory that is no longer needed.

Failure to manage memory properly can lead to memory leaks, which can cause a program to consume more and more memory over time until it eventually crashes or becomes unstable.


printf("%.0f",abc); // to get only interger part ! 



```

```
- get input 10% 20% ,
- two ways .

```

##### data type limitation - 

```
In C programming language, there are several data type limitations that programmers need to be aware of. Here are a few examples:

Integer Limits: The range of values that can be stored in an integer variable depends on its size or data type. For example, a 16-bit signed integer can store values from -32,768 to 32,767, while a 32-bit signed integer can store values from -2,147,483,648 to 2,147,483,647.

Floating Point Limits: In C, floating-point numbers have limited precision, which means that they can only represent a certain number of digits accurately. This can result in rounding errors and loss of precision when performing arithmetic operations with floating-point numbers.

String Length Limitations: The maximum length of a string that can be stored in C depends on the amount of memory available. If a string exceeds the available memory, it can cause a buffer overflow, which can lead to unexpected program behavior or security vulnerabilities.

Memory Allocation Limitations: In C, memory allocation is managed using pointers and dynamic memory allocation functions such as malloc() and free(). However, if a program tries to allocate too much memory, it can run out of available memory or cause memory leaks, which can also lead to unexpected program behavior or crashes.

Type Conversion Limitations: In C, type conversions can sometimes result in data loss or unexpected behavior. For example, converting a floating-point number to an integer can result in truncation of the decimal part of the number, which can lead to incorrect results.

```

```

int -> 4bytes
long long int -> 8 bytes
float -> 4bytes
doubke -> 8 bytes.

1 1 1 = 1 2 4 = 7  ( for one +) (2^n -1)
3 bit - 0-7.
4 bit - 0-15.
int 2^32 -1 (-2^32 theke 2^32-1)  = 1000000000 = (+-10^9)

long long int(integer ar double )(lld) (8byte 2^64) (+-10^18)

float(6point) , double (lf-long float)


```

### Rules for Naming Variables in c

```

In C, variables are used to store data and we need to give them a name that is easy to remember and meaningful. Here are some rules for naming variables in C:

Variable names can only contain letters (both uppercase and lowercase), digits, and underscores (_).

The first character of a variable name must be a letter or an underscore.

Variable names are case-sensitive, which means that upper-case and lower-case letters are considered different. For example, 'age' and 'Age' are two different variable names.

Variable names cannot be the same as keywords (reserved words) in the C language. For example, you cannot name a variable 'int', 'float', or 'if'.

The length of a variable name cannot exceed 31 characters.

It is recommended to use meaningful and descriptive names for variables that reflect their purpose or content.

Examples of valid variable names:

age
weight_in_kg
total_cost
temp_1
Examples of invalid variable names:

123num (should start with a letter or underscore)
my-variable (contains an illegal character '-')
if (a reserved keyword)
this_variable_name_is_way_too_long (exceeds the maximum length of 31 characters)

```

