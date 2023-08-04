#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void add_to_linkedList(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}
void reverse(Node *&head, Node *current)
{
    if (current->next == NULL)
    {
        head = current;
        return;
    }
    reverse(head, current->next);
    current->next->next = current;
    current->next = NULL;
}
bool isPL(Node *head)
{
    Node *newHead = NULL;
    Node *newTail = NULL;
    Node *tmp = head;
    while (tmp != NULL)
    {
        insert_at_tail(newHead, newTail, tmp->val);
        tmp = tmp->next;
    }
    reverse(newHead, newHead);
    tmp = head;
    Node *tmp2 = newHead;
    while (tmp != NULL)
    {
        if (tmp->val != tmp2->val)
        {
            return false;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    return true;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        add_to_linkedList(head, tail, v);
    }
    bool pl = isPL(head);
    if (pl)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}


/**
 * another efficient way  - 
 
 class Solution {
private:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        while (current) {
            ListNode* nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        return prev;
    }

public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next)
            return true;

        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        slow = reverse(slow);

        while (slow && head) {
            if (slow->val != head->val)
                return false;
            slow = slow->next;
            head = head->next;
        }

        return true;
    }
};

*/