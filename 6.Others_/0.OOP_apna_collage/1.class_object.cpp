#include<bits/stdc++.h>
using namespace std;

class Teacher{
        // properties/attributes
    private : 
        double salary;
        
    public:
        // non-parameterized constructor.
        Teacher(){
            cout<<"this is my Constructor"<<endl;
        }
        // perapeteraized constructor 
        Teacher(string name){
            // name=name;// this time compiler confused hye jy. 
            this->name=name;
        }
        // copy constructor 
        string name;
        string dept;
        string subject;

        // method ( function in class called  method ) / member function.

        void changeDept(string newdep){
            dept=newdep;
        }

        //setter (private value k set kre get kre)
        void setSalary(int s){
            salary=s;
        }

        // getter
        double getSalary(){
            return salary;
        }
    // copy constructor : 
    Teacher(Teacher &obj){ // pass by referece. it's not copy , it's orginal object. 
    cout<<"i am custom copy constructor"<<endl;
        this->name=obj.name;
        this->dept=obj.dept;
    }
    
};



// always semicolon after class. 

int main(){

    Teacher t1("asdsg"),t3,t4,t5;
    t1.dept="dhaka";
    Teacher t2(t1); // copy constructor. // default copy constructor involed.
    // as we create copy constructor, now will called coustom copy constructor. 

    cout<<t2.name<<endl;

    return 0;
}