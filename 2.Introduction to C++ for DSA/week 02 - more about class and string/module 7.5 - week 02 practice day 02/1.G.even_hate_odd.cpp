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
        int arr[n];
        int odd_number = 0, even_number = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                even_number++;
            }
            else
            {
                odd_number++;
            }
        }
        if (odd_number == even_number)
        {
            cout << "0" << endl;
        }
        else if (n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            if (odd_number > even_number)
            {
                cout << (odd_number - even_number)/2 << endl;
            }
            else
            {
                cout << (even_number - odd_number)/2 << endl;
            }
        }
    }
    return 0;
}