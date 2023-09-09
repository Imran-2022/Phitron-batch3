#include <bits/stdc++.h>
using namespace std;


int unbounded_knapsack(int n, int s, int val[], int w[])
{
    if(n==0|| s==0)return 0;

    if (w[n - 1] <= s)
    {
        int ch1 = val[n - 1] + unbounded_knapsack(n, s - w[n - 1], val, w);
        int ch2 = unbounded_knapsack(n - 1, s, val, w);
        return max(ch1, ch2);
    }else{
        return unbounded_knapsack(n-1,s,val,w);
    }
}


int main()
{
    int n, s;
    cin >> n >> s;
    int val[n], weight[n];
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    cout<<unbounded_knapsack(n,s,val,weight)<<endl;
    return 0;
}

/*

input : 
4 6
5 3 2 4
4 1 2 3

output:
18

*/