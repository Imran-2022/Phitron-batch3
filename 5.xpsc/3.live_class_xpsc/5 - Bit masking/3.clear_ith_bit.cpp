#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    cin>>i;
    int x=63;
    int mask=1<<i;
    int newMask=(x^mask);
    int final=(n&newMask);
    cout<<final<<endl;
    return 0;
}

/*
input:

11
1

output:
9

*/