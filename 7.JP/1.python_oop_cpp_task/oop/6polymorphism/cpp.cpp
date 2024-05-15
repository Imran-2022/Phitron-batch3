#include <bits/stdc++.h>
using namespace std;

class MyClass{
    public:
        string name = "imran";
    void Myname(){
        cout<<name<<endl;
    }
};

class Another:public MyClass{
    public:
    void Myname(){
        cout<<name<<" "<<name<<endl;
    }
};


void solve()
{
    Another class1;
    class1.Myname();
}

int main()
{
    int t = 1;
    while (t--)solve();
    return 0;
}
