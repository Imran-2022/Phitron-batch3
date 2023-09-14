#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name,int roll, int marks ){
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }   
};

class cmp{
    public:
        bool operator()(Student a, Student b){
            if(a.marks<b.marks)return true;
            else if(a.marks>b.marks) return false;
            else {
                if(a.roll>b.roll)return true;
                else return false;
            }
        }
};

int main()
{
    int n;
    cin>>n;

    priority_queue<Student,vector<Student>,cmp>pq;

    for(int i=0;i<n;i++){

        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        pq.push(obj);

    }

    while (!pq.empty())
    {
        cout<<pq.top().name<<" _ "<<pq.top().marks<<endl;
        pq.pop();

    }

    return 0;
}

/*
input:

5
rahim 25 85
shanto 36 99
tamim 9 85
sakib 23 95
musfiq 30 89

output:

shanto _ 99
sakib _ 95
musfiq _ 89
tamim _ 85
rahim _ 85


*/