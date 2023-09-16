#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int adjmat[N][N];
vector<int> adjList[N];

int main()
{
    int n;
    cin >> n;
    
    // Read adjacency matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> adjmat[i][j];
            if (adjmat[i][j])
            {
                adjList[i].push_back(j+1);
            }
        }
    }
    
    // Print adjacency lists
    for (int i = 0; i < n; i++)
    {
        cout << "List " << i + 1 << " : ";
        for (int x : adjList[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
