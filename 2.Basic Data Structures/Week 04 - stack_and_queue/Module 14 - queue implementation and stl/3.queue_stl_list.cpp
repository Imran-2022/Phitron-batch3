#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
       l.pop_front(); // Corrected: Remove elements from the front of the list
    }
    int size()
    {
        return l.size();// O(1) keep track like us internally that's why O(1)
    }
    int front()
    {
        return l.front();
    }
    bool isEmpty()
    {
        return l.empty();
    }
};

main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.isEmpty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}