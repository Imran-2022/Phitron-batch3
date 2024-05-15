#include <bits/stdc++.h>
using namespace std;

class MyClass{
    public:
    string name;
    int age;

};

void solve(){
    MyClass class1;
    class1.name="imran";
    class1.age=22;
    cout<<class1.name<<" "<<class1.age<<endl;
}

int main()
{
    int t=1;
    while(t--)solve();
    return 0;
}