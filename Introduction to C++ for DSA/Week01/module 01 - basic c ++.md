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
    cout<<ch<<endl;
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