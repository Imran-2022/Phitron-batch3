#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> vt;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vt.push_back(x);
        }

        list<int> vecList(vt.begin(), vt.end());

        // descending ordered sorted list
        vecList.sort(greater<int>());
        
        // unique list
        vecList.unique();

        for (int val : vecList) cout << val << " ";
            
        cout << endl;
    }

    return 0;
}