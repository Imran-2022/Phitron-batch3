#include <bits/stdc++.h>
using namespace std;
const int INF=1e7;
int main()
{
    int n, e;
    cin >> n >> e;
    int dis[n + 1][n + 1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dis[i][j] = INF;
            if (i == j)
                dis[i][j] = 0;
        }
    }

    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        dis[a][b] = w;
    }


    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if(dis[i][j]==INT_MAX)cout<<"INF"<<"   ";
    //         else cout << dis[i][j] << "   ";
    //     }
    //     cout << endl;
    // }


    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if( dis[i][k]+dis[k][j]<dis[i][j]){
                    dis[i][j]=dis[i][k]+dis[k][j];
                }
            }
        }
    }

 for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(dis[i][j]==INF)cout<<"INF"<<" ";
            else cout << dis[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
input :- 

4 6
1 2 3
2 1 2
1 4 5
4 3 2
3 2 1
2 4 4

output :- 

0   3   INF   5   
2   0   INF   4   
INF   1   0   INF   
INF   INF   2   0   

input 
4 6
1 2 3
2 1 2
1 4 5
4 3 2
3 2 1
2 4 4

output

0 3 7 5 
2 0 6 4 
3 1 0 5 
5 3 2 0 


input :-
3 3
1 2 -1
2 3 2
3 1 -5

output :- 

-4 -5 -3 
-3 -4 -2 
-9 -10 -8 


if(diagonal change , that's means negative cycle.)

*/