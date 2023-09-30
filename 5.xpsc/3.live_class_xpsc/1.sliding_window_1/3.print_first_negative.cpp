#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;

    int i = 0, j = 0;
    queue<int> q;

    while (j < n)
    {
        if (a[j] < 0)
            q.push(a[j]);
        if (j >= k - 1)
        {
            if (q.size())
                cout << q.front() << " ";
            else
                cout << 0 << " ";
            if (a[i] < 0)
                q.pop();
            i++;
        }
        j++;
    }
    return 0;
}

/*
input:
6
1  -3  2 -4 6 -5 
3

output:
-3 -3 -4 -4 
*/