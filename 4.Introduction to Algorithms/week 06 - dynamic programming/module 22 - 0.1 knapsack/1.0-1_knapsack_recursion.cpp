#include <bits/stdc++.h>
using namespace std;

int knapsack(int n, int s, int v[], int w[])
{

    // base case ,

    if (n == 0 || s == 0)
        return 0;

    if (w[n - 1] <= s)
    {
        int op1 = knapsack(n - 1, a) + v[n - 1];
        int op2 = knapsack(n - 1, s, v, w);
        return max(op1, op2);
    }
    else
    {
        return knapsack(n - 1, s, v, w);
    }
    
}



int main()
{
    int n;
    cin >> n;
    int v[n], w[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }

    int s;
    cin >> s;

    cout <<"knapsack : "<< knapsack(n, s, v, w) << endl;

    return 0;
}

/*

input: 

4 - size
1 5 3 2 - val
5 2 4 3 - weight
7 - mx_weight

output:

knapsack : 8


*/