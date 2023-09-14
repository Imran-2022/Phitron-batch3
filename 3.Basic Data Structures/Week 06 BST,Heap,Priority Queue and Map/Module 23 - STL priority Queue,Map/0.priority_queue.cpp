#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    while (true)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int x;
            cin >> x;
            pq.push(x);  //O(logn)
        }
        else if (c == 1)
        {
            pq.pop(); //O(logn)
        }
        else if (c == 2)
        {
            cout << pq.top() << endl; //O(1)
        }
        else
        {
            break;
        }
    }
    return 0;
}

/*
pq te front nai. 

input:

0 12
0 20
0 30
0 2
1
2
3

output:

20

*/