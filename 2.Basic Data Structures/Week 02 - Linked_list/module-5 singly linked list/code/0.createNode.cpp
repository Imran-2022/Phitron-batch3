#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
};

int main()
{
    Node a, b;
    a.val=10;
    a.next=&b;
    b.val=202;
    b.next=NULL;
    cout<<a.next->val<<endl;
    return 0;
}