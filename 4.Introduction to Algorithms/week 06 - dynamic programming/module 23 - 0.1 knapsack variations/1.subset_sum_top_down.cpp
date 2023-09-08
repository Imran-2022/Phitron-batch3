#include <bits/stdc++.h>
using namespace std;

bool subset_sum(int n, int a[], int s)
{
    if (n == 0)
    {
        if (s == 0)
            return true; 
        else
            return false;
    }
    if (a[n - 1] <= s)
    {
        bool op1 = subset_sum(n - 1, a, s - a[n - 1]);
        bool op2 = subset_sum(n - 1, a, s);
        return op1 || op2;
    }
    else
    {
        return subset_sum(n - 1, a, s);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s;
    cin >> s;
    if(subset_sum(n,a,s))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}