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
void Insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void minmax(Node *head, int &min, int &max)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val < min)
            min = tmp->val;
        if (tmp->val > max)
            max = tmp->val;
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int min = INT_MAX;
    int max = INT_MIN;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        Insert(head, tail, val);
    }
    minmax(head, min, max);
    cout << max << " " << min << endl;
    return 0;
}