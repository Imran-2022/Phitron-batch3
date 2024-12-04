#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        Student(){
            cout<<"non-parameterized\n"<<endl;
        }
        Student(string name){
            this->name=name;
            cout<<"parameterized Constructor"<<endl;
        }
        void show(int x){
            cout<<"int : "<<x<<endl;
        }

        void show(char ch){
            cout<<"char : "<<ch<<endl;
        }

};


class Parent{
    public: 
        void getInfo(){
            cout<<"parent lass\n"<<endl;
        }

       virtual void hello(){
            cout<<"hello from parents\n"<<endl;
        }
};

class Child : public Parent{
    public: 
        void getInfo(){
            cout<<"child class\n"<<endl;
        }

        void hello(){
            cout<<"hello from parents\n"<<endl;
        }
};


int main(){
    Student s1("imran");
    Child c1;
    s1.show(2); 
    c1.getInfo(); // child class print
    return 0;
}