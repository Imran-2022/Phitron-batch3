#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *next;
        Node(int val){
            this->val=val;
            this->next=NULL;
        }
};

// insert into tail

// void insert_at_tail(Node *head, int val)

// The insert_at_tail function won't work correctly because the function is modifying a local copy of the head pointer, which means the changes made inside the function won't be reflected outside the function. To fix this, you need to pass a pointer to a pointer or a reference to a pointer as a parameter, so that the changes made to the pointer inside the function are reflected outside the function.

void insert(Node *&head,int val){

    Node *newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhone last node e.
    tmp->next = newNode;

}
// pint linkedlist
void print(Node *head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    Node *head=new Node(10);
    insert(head,20);
    print(head);

    return 0;
}