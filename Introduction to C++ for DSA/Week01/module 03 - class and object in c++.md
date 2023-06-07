### 3-0 Introduction
```
what we will learn today ? 

1. class and object.
2. constructor .
3. return object from function.
4. dynamic object.
5. c++ sort (). 

```

### 3-1 Class and Object Animated
```

```
### 3-2 Class and Object in C++
```

```

### 3-3 Create Class and Object
```
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int clas;
};

int main()
{
    Student s;
    s.clas=1;
    s.roll=34;
    char nm[100]="imran hasan !";
    strcpy(s.name,nm);
    cout<<s.name<<endl;
    return 0;
}

```

### 3-4 Constructor in C++
```
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int clas;
    Student(char *a, int b, int c)
    {
        strcpy(name, a);
        roll = b;
        clas = c;
    }
};

int main()
{
    Student s("dsg", 2, 3);
    cout << s.name << endl;
    return 0;
}
```

### 3-5 Return Object from Function
```
#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r,char s,int c,char* n)
        {
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};
Student fun()
{
    char name[100]="Rahim Ullah";
    Student r(29,'C',7,name);
    return r;
}
int main()
{
    Student rahim=fun();

    cout<<rahim.name<<endl;
    cout<<rahim.roll<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.cls<<endl;
    return 0;
}
```

### 3-6 Dynamic Object in C++

```
#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r,char s,int c,char* n)
        {
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};
int main()
{
    char name[100]="Rahim Ullah";
    // Student rahim(5,'A',11,name);
    Student* rahim = new Student(5,'A',11,name);
    (*rahim).roll=55;

    // int * a = new int;
    // *a=10;
    // cout<<*a<<endl;

    // cout<<(*rahim).name<<endl;
    // cout<<(*rahim).roll<<endl;
    // cout<<(*rahim).section<<endl;
    // cout<<(*rahim).cls<<endl;

    // shortcut upay
    // arrow sign
    // (*rahim). = rahim->

    cout<<rahim->name<<endl;
    cout<<rahim->roll<<endl;
    cout<<rahim->section<<endl;
    cout<<rahim->cls<<endl;

    // delete an object 
    delete rahim;

    cout<<rahim->name<<endl;
    cout<<rahim->roll<<endl;
    cout<<rahim->section<<endl;
    cout<<rahim->cls<<endl;
    return 0;
}
```

### 3-7 Access Values of Dynamic Object
```
-> sign or (*name_object).property.
```

### 3-8 sort() Function in C++
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sorting ascending
    // sort(arr, arr + n);
    // sorting descending
    // sort(arr, arr + n, greater<int>());

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
```

### 3-9 Summary
```

```