#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }
    int size()
    {
        return v.size();
    }
    int top()
    {
        return v.back();
    }
    void pop()
    {
        v.pop_back();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack st1, st2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    if (st1.size() != st2.size())
    {
        cout << "NO" << endl;
        return 0;
    }
    bool compare = true;
    while (!st1.empty())
    {
        int t1 = st1.top();
        int t2 = st2.top();
        if (t1 != t2)
        {
            compare = false;
            break;
        }
        st1.pop();
        st2.pop();
    }
    if (compare)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}