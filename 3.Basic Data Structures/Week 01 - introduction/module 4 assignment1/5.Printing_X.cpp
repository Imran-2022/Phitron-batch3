#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == n / 2 && i == n / 2)
            {
                cout << "X";
            }
            else if (i == j && j != n / 2 && i != n / 2)
            {
                cout << "\\";
            }
            else if (j == n - i - 1)
            {
                if (j != n / 2 && i != n / 2)
                {
                    cout << "/";
                }
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}