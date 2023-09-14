#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        s.insert(x);// o(logn)
    }

    // for(auto it=s.begin();it!=s.end();it++){
    //     cout<<*it<<endl;
    // }

// count - paile -1 , na paile - 0.

    if(s.count(10))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

/*

input:

7
10 2 30 3 100 5 7

output:

2
3
5
7
10
30
100

*/