#include <bits/stdc++.h>
using namespace std;

class MyClass {
public:
    string name;
    int age;
    void myMethod();
    
    MyClass(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

void MyClass::myMethod(){
    cout << name << " " << age << endl;
}

void solve() {
    MyClass class1("imran", 22);
    class1.myMethod();
}

int main() {
    int t = 1;
    while (t--) solve();
    return 0;
}
