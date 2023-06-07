#### 1.a Explain Stack and Heap memory.

```
Stack is a fixed-size region that is automatically managed by the operating system. while the heap is a dynamic region of memory .
stack is used to store local variables and function parameters in LIFO order, while the heap is used to store data that need to persist beyond the lifetime of a function call etc. that's it. 
```

### 1.b Why do we need dynamic memory allocation? Explain with examples.

```
Dynamic memory allocation is important when we don't know the memory requirements of a program at compile-time. Another reason we might need dynamic memory allocation is that we want to be able to allocate memory on demand. 

```


### 1.c How to create a dynamic array? What are the benefits of it?

```
In C++, we can create a dynamic array using pointers and the new operator. Here's an example:

int* arr = new int[size];

for (int i = 0; i < size; i++) {
    arr[i] = i;
}

// Delete the array to free up memory
delete[] arr;

The benefits of using a dynamic array include:

1.Flexibility: Dynamic arrays allow you to add or remove elements at runtime, which provides more flexibility than fixed-size arrays.

2.Efficiency: saving memory

3.Simplified code: With dynamic arrays, we don't need to worry about managing memory allocation ourself. The programming language takes care of allocating and deallocating memory as needed.


```


### 2.a How does class and object work? How to declare an object?

```
A class is a template from which individual object can be created.
It defines a set of attributes and methods that the objects created from it will have.
Any class type variable is called an object. 

Declaring an object: 

can declare an object using the following syntax:
class_name object_name;
Here, class_name is the name of the class and object_name is the name you want to give your object. For example, if you have a class named Person, you can declare an object called person1 like this:
Person person1;

```
### 2.b  What is a constructor and why do we need this? How to create a constructor show with an example.
```
- special type of function that is used to initialize the object of its class. constructor has the same name as that of the class it belogs.
it has not return type not even void.it called automaticaly.

we need this because - 

constructors allow you to set default values for variables and member functions when an object is created. 

constructors can be used to allocate memory dynamically,

constructors provide a way to initialize constant or read-only data members in a class

Creating constructor with example - 
To create a constructor, use the same name as the class, followed by parentheses();

#include <bits/stdc++.h>
using namespace std;

class Myclass
{
public:
    Myclass()
    {
        cout<<"my class"<<endl;
    }
}; 

int main()
{
    Myclass abc;
    return 0;
}

```

### 2.c Create a class named Person where the class will have properties name(string), height(float) and age(int). Make a constructor and create a dynamic object of that class and finally pass proper values using the constructor. 

```
#include<bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    float height;
    int age;

    Person(string str, float heightt, int agee)
    {
        name = str;
        height = heightt;
        age = agee;
    }
};

int main()
{
    Person *p = new Person("John", 6.2, 28);
    return 0;
}

```

### 3.a What is the size that an object allocates to the memory?

```
the size of any object is equal to the sum of the size of all the class data members.
```

### 3.b Can you return a static object from a function? If yes, show with an example

```
Yes, it is possible to return a static object from a function in C++. Here's an example:

#include <iostream>

using namespace std;

class MyClass {
    public:
        MyClass() {
            cout << "Object created." << endl;
        }
};

MyClass& getStaticObject() {
    static MyClass obj; // static object
    return obj;
}

int main() {
    cout << "Calling getStaticObject() for the first time..." << endl;
    MyClass& obj1 = getStaticObject();

    cout << "Calling getStaticObject() for the second time..." << endl;
    MyClass& obj2 = getStaticObject();

    return 0;
}
In this example, we define a class named MyClass. Within the getStaticObject() function, we create a static object of the MyClass type. This object is then returned by reference each time the getStaticObject() function is called.

When we run the program, we can see that the static object is created only once and subsequent calls to the getStaticObject() function return the same object:

Calling getStaticObject() for the first time...
Object created.
Calling getStaticObject() for the second time...
As you can see, the second call to getStaticObject() does not result in the creation of another object.

```

### 3.c Why do we need -> (arrow sign)?

```
 the arrow operator -> is used to access the members of a class or structure that is pointed to by a pointer.
```

### 3.d Create two objects of the Person class from question 2-c and initialize them with proper value. Now compare whose age is greater, and print his/her name.

```
#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    float height;
    int age;

    Person(string str, float heightt, int agee)
    {
        name = str;
        height = heightt;
        age = agee;
    }
};

int main()
{
    Person *p = new Person("imran", 6.2, 28);
    Person *q = new Person("asif", 6.5, 24);
    if (p->age > q->age)
    {
        cout <<"name: "<< p->name << endl;
    }
    else if (q->age > p->age)
    {
        cout <<"name: "<< q->name << endl;
    }
    else
    {
        cout<<"both age same"<<endl;
    }

    return 0;
}

```

