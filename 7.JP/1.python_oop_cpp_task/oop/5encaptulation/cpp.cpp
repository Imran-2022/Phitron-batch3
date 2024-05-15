#include <bits/stdc++.h>
using namespace std;

class MyClass{
    private:
        string name = "imran";
    public:
        // Setter
        void setName(string s) {
            name = s;
        }
        // Getter
        string getName() {
            return name;
        }
};


void solve()
{
    MyClass class1;
    class1.setName("imran");
    cout<<class1.getName()<<endl;
}

int main()
{
    int t = 1;
    while (t--)solve();
    return 0;
}
