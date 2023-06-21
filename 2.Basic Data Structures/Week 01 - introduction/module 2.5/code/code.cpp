#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
       if(arr[i]>=38){
         if (arr[i] % 5 != 0 && (5 * (arr[i] / 5 + 1) - arr[i] < 3))
        {
            arr[i] = 5 * (arr[i] / 5 + 1);
        }
       }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}