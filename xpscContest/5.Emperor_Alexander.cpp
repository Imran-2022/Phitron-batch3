#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int parentSize[N];

class Edge {
public:
    int a, b;
    long long w;
    Edge(int a, int b, int w) {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

void dsu_set(int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = -1;
        parentSize[i] = 1;
    }
}

int dsu_find(int node) {
    while (parent[node] != -1) {
        node = parent[node];
    }
    return node;
}

void dsu_union(int a, int b) {
    int EmperorA = dsu_find(a);
    int EmperorB = dsu_find(b);
    if (EmperorA != EmperorB) {

        if (parentSize[EmperorA] > parentSize[EmperorB]) {
            parent[EmperorB] = EmperorA;
            parentSize[EmperorA] += parentSize[EmperorB];
        } else {
            parent[EmperorA] = EmperorB;
            parentSize[EmperorB] += parentSize[EmperorA];
        }
        
    }
}

int main() {
    int n, e;
    long long cost = 0,cnt = 0;
    cin >> n >> e;
    vector<Edge> v;
    dsu_set(n);
    
    while (e--) {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        v.push_back(Edge(a, b, w));
    }
    
    sort(v.begin(), v.end(), cmp);
    
    for (Edge val : v) {
        int a = val.a;
        int b = val.b;
        int EmperorA = dsu_find(a);
        int EmperorB = dsu_find(b);
        
        if (EmperorA == EmperorB) {
            cnt++;
            continue;
        }

        cost += val.w;
        dsu_union(a, b);
    }
    
    n--;

    if (cnt >=n) cout << cnt << " " << cost << endl;
    else cout << "Not Possible" << endl;
    
    return 0;
}
