#include <bits/stdc++.h>
using namespace std;

int knapsack(int n, int m, int v[], int w[])
{
    // base case ,

    if (n == 0 || m == 0)
        return 0;

    if (w[n - 1] <= m)
    {
        int op1 = knapsack(n - 1, m - w[n - 1], v, w) + v[n - 1];
        int op2 = knapsack(n - 1, m, v, w);
        return max(op1, op2);
    }
    else
    {
        return knapsack(n - 1, m, v, w);
    }
}

int main()
{
    int n,m;
    cin >> n>>m;

    int v[n], w[n];

    for (int i = 0; i < n; i++)
    {
        cin >> w[i]>>v[i];
    }

    cout <<knapsack(n, m, v, w) << endl;

    return 0;
}

/*
input:

3 8
3 30
4 50
5 60

output:

90

*/