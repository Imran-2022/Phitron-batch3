#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            string x;
            cin >> x;
            q.push(x);
        }
        else if (x == 1 && q.size() != 0)
        {
            cout << q.front() << endl;
            q.pop();
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}