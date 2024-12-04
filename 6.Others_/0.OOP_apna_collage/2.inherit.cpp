#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
        string name;
        int age;
        Person(string name, int age){
            this->name=name;
            this->age=age;
        }
        // Person(){

        // }
};

class Student:public Person{
    // privately inherit krle akhane segula private property hye jbe........
    // name,age,rollno. 
    
    public:
        int rollno;

    Student(string name,int age,int rollno):Person( name,age){
        this->rollno=rollno;
    }
        void getInfo(){
            cout<<"name: "<<name<<endl;
            cout<<"age: "<<age<<endl;
            cout<<"rollno"<< rollno<<endl;
        }
};

// person jai, student o to sai ? 

int main(){
    Student s1("imran", 21, 1242);
    s1.name="imran";
    s1.age=21;
    s1.rollno=1242;
    s1.getInfo();
    return 0;
}