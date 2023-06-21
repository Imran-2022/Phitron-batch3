#### 5-0 Introduction
```
1. C++ ar string .
2. string buildin function.
3. with space input.
4. word by word. 
5. iterator.

```
#### 5-1 String in C++

```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "this is imran";
    string d = "this is imran";
    if (s == d)
    {
        cout << "HI" << endl;
    }
    else
    {
        cout << "JI" << endl;
    }
    return 0;
}

```
#### 5-2 String Capacity Functions
```
String build-in functions - 

1. Capacity - 

a. s.size() -> returns the size of the string.
b. s.max_size() -> returns the maximum size that string can hold.
c. s.capacity() -> returns current available capacity of the string.
d. s.clear() -> clear the string.
e. s.empty() -> return true/false if the string is empty.
f. s.resize() -> change the size of the string.

---
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "this is imrand";
    cout<<s.max_size()<<endl; // for online compiler -  10^6 maximum.
    return 0;
}
---

```
#### 5-3 String Element Access
```
a. S[i] -> access the ith index of the string.
b. s.at(i) -> accss the ith index of the string.
c. s.back() -> access the last element of the string.
d. s.front() -> access the first element of the string. 

```

#### 5-4 String Modifiers - I
```
a. s+= -> append another string.
b. s.append() -> append another string.
c. s.push_back() -> add character to the last of the string.
d. s.pop_back() -> remove the last character of the string.
e. s= -> assign string.
f. s.assign() -> assign string.
g. s.erase() -> erase characters from the string.
h. s.replace() -> replace a portion of the string. 


string abc = "this is string";
       abc.replace(2,4,"SDg");// start , number of character to be replaced , C string to insert.
       abc.erase(2,4);// start,end;
       cout << abc;

```

#### 5-5 String Modifiers - II
```
g. s.erase() -> erase characters from the string.
h. s.replace() -> replace a portion of the string. 
i. s.insert() -> insert a portion to a specific position.

    abc.insert(2," SDg sg");

```
#### 5-6 String Iterators
```

a.s.begin() -> pointer to the first element.
b.s.end() -> pointer to the next element after the last element of the string.

string abc = "this is string";
    cout << *abc.begin()<<endl;
    cout << *(abc.end()-1);
    return 0;

```


#include <bits/stdc++.h>
using namespace std;
int main()
{
    string abc = "this";
    // string::iterator id; replace using auto
    for (auto id = abc.begin(); id < abc.end(); id++)
    {
        cout << *id << endl;
    }
    return 0;
}


#### 5-7 String Input with Spaces

```

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int abcs;
    cin>>abcs;
    cin.ignore();// to ignore one character (\n) . or getchar(); same work;
    string s;
    getline(cin,s);
    cout<<s<<endl;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // char s[100];
    // cin.getline(s,100);
    getline(cin,s);

    return 0;
}

```

### 5-8 Stringstream in C++
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string world;
    ss>>world;
    cout<<world<<endl;
    ss>>world;
    cout<<world<<endl;
    return 0;
}

-

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    // stringstream ss(s); 
    stringstream ss;
    ss<<s;
    int coutt=0;
    string world;
    while (ss >> world)
    {
        cout<<world<<endl;
        coutt++;
    }
    cout<<coutt;

    return 0;
}

```

### 5-9 Summary
```


```