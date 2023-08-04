#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
        int val;
        Node* next;
    Node(int  val){
        this->val=val;
        this->next=NULL;
    }
};

void insert(Node *&head, Node *&tail, int val){
    Node *newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

void print(Node *head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}

void delete_val(Node *head, int v) {
    Node *current = head;

    // Check if the head node(s) have the target value
    while (current != nullptr && current->val == v) {
        Node *deletable = current;
        current = current->next;
        head = current; // Update head to the current node after deletion
        delete deletable;
    }

    // Now traverse the rest of the list
    while (current != nullptr && current->next != nullptr) {
        if (current->next->val == v) {
            Node *deletable = current->next;
            current->next = current->next->next;
            delete deletable;
        } else {
            current = current->next;
        }
    }
}


int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    while(true){
        int x;cin>>x;
        if(x==-1)break;
        insert(head,tail,x);
    }
    int val;cin>>val;
    delete_val(head,val);   
    print(head);
    return 0;
}