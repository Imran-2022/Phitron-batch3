#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    list<int> lst;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        lst.push_back(x);
    }
    int t;
    while (t--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            int y;
            cin >> y;
            lst.push_back(y);
            auto minV = min_element(lst.begin(), lst.end());
            if (minV != lst.end())
            {
                int value = *minV;
                cout << value << endl;
            }
        }
        else if (cmd == 1)
        {
            auto minV = min_element(lst.begin(), lst.end());
            if (minV != lst.end())
            {
                int value = *minV;
                cout << value << endl;
            }
        }
        else if (cmd == 2)
        {
            auto minV = min_element(lst.begin(), lst.end());
            if (minV != lst.end())
            {
                lst.erase(minV);
            }
            auto minV = min_element(lst.begin(), lst.end());
            if (minV != lst.end())
            {
                int value = *minV;
                cout << value << endl;
            }
        }
    }

    return 0;
}