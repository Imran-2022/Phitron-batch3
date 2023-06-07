#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3};
    vector<int> c={3,4,5};
    int arr[3]={1,2,3};

    c=v; // here time complexity is O(1);

    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
    c.push_back(4);
    c.pop_back();
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }

    return 0;
}