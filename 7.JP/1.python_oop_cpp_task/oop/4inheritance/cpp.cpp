#include <bits/stdc++.h>
using namespace std;

class MyClass{
    public:
    string name = "imran";
};

class MyAge : public MyClass{
    public:
    int age = 22;
};

void solve()
{
    MyAge ag;
    cout << ag.name << " " << ag.age << endl;
}

int main()
{
    int t = 1;
    while (t--)solve();
    return 0;
}
