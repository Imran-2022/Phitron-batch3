### 6-0 Introduction
```
1. c++ ar string class ar constructor ar use.
2. string kibabe sort korte hy.
3. range based for loop.
4. reverse way te word print.
5. class ar moddhe function nea kj , this keyword.
6. dynamic object copy.
7. namespaced kibabe toire hy. 

```
### 6-1 String Constructor
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string abc="ahb";
    // string abc("ahb");
    // string abc("ahbd", 3);
    // string abc("ahbd");
    // string cc(abc, 2);
    // string cc(5, 'y');
    cout << cc << endl;
    return 0;
}

```
### 6-2 Sort String using sort() function

```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    cin>>ch;
    sort(ch.begin(),ch.end());
    cout<<ch;
    return 0;
}
```
### 6-3 Range Based For Loop in String
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    cin>>ch;
    for(char chh:ch){
        cout<<chh<<endl;
    }
    return 0;
}
```
### 6-4 Reverse Word Printing using Stringstream

```
#include<bits/stdc++.h>
using namespace std;
void print(stringstream& ss)
{
    string word;
    if(ss>>word)
    {
        
        print(ss);
        cout<<word<<endl;
    }
}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    print(ss);
    return 0;
}
```
### 6-5 Function Inside Class
```
#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
        Person(string nm,int ag,int m1,int m2)
        {
            name=nm;
            age=ag;
            marks1=m1;
            marks2=m2;
        }
        void hello()
        {
            cout<<name<< " " <<age<<endl;
        }
        int total_marks()
        {
            return marks1+marks2;
        }
};
int main()
{
    Person rakib("Rakib Ahsan",24,95,85);
    cout<<rakib.name<<endl;
    return 0;
}
```
### 6-6 This Keyword in C++
```
#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
        void hello()
        {
            cout<<"Hello"<<endl;
        }
};
int main()
{
    Person rakib("Rakib Ahsan",24);
    cout<<rakib.name<<" "<<rakib.age<<endl;
    return 0;
}
```
### 6-7 Copy Dynamic Object

```
#include<bits/stdc++.h>
using namespace std;
class Person
{ 
    public:
        string name;
        int age;
        Person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
};
int main()
{
    Person* rakib=new Person("Rakib Ahsan",25);
    Person* sakib=new Person("Sakib Ahamed",23);

    // rakib=sakib;
    // rakib->name=sakib->name;
    // rakib->age=sakib->age;
    *rakib=*sakib;
    delete sakib;
    cout<<rakib->name<<" "<<rakib->age<<endl;
    return 0;
}
```
### 6-8 Namespaces in C++

```
#include<bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age=24;
    void hello()
    {
        cout<<"Rakib namespaces"<<endl;
    }
}
namespace Sakib
{
    int age=30;
    void hello()
    {
        cout<<"Sakib namespaces"<<endl;
    }
}
using namespace Rakib;
int main()
{
    cout<<age<<endl;
    hello();
    Sakib::hello();
    return 0;
}
```
### 6-7 Copy Dynamic Object

```

```