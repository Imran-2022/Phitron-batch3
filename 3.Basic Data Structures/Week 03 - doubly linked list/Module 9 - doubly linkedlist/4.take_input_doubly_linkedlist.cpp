#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
        int val;
        Node* next;
        Node* pre;
    Node(int  val){
        this->val=val;
        this->next=NULL;
        this->pre=NULL;
    }
};

void insert(Node * &head,Node* &tail,int val){
    Node* newNode=new Node(val);

    if(tail==0){
        head=newNode;
        tail=newNode;
        return;
    }

    tail->next=newNode;
    newNode->pre=tail;
    tail=newNode;
}
void print_linkedList(Node * tail){
    Node * tmp = tail;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->pre;
    }
    
}
int main()
{
    Node * head= NULL;
    Node * tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert(head,tail,val);
    }

    print_linkedList(tail);
    
    return 0;
}