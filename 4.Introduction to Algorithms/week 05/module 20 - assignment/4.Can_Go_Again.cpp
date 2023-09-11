#include <bits/stdc++.h>
using namespace std;
const long long InF =1e18;
class Edge
{
public:
    long long u;
    long long v;
    long long w;
    Edge(long long u, long long v, long long w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{
    
    long long n, e;
    cin >> n >> e;
    vector<Edge> v;

    while (e--)
    {
        long long a, b;
        long long w;
        cin >> a >> b >> w;
        Edge ed(a, b, w);
        v.push_back(ed);
    }

    long long dis[n + 1];
    for (long long i = 1; i <= n; i++)
    {
        dis[i] = InF;
    }

    long long source;
    cin >> source;
    dis[source] = 0;

 
    for (long long i = 1; i <= n - 1; i++)
    {

        for (long long j = 0; j < v.size(); j++)
        {
            Edge ed = v[j];
            long long a = ed.u;
            long long b = ed.v;
            long long w = ed.w;
            if (dis[a] != InF && dis[a] + w < dis[b])
            {
                dis[b] = dis[a] + w;
            }
        }

    }
   bool cycle = false;

    for (long long j = 0; j < v.size(); j++)
    {
        Edge ed = v[j];
        long long a = ed.u;
        long long b = ed.v;
        long long w = ed.w;
        if (dis[a] != InF && dis[a] + w < dis[b])
        {
            cycle=true;
            dis[b] = dis[a] + w;
            break;
        }
    }

    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    long long t;
    cin >> t;


    while (t--)
    {
        long long x;
        cin >> x;
        if (dis[x] != InF)
        {
            cout << dis[x] << endl;
        }
        else
        {
            cout << "Not Possible" << endl;
        }
    }

    return 0;
}