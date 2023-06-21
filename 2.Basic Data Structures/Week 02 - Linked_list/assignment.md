### https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-03/challenges/max-min-9/problem

### 1 Max Min

```
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

void insert_tail(Node *&head, Node *&tail, int val)
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

void print_MIN_MAX(Node *head)
{
    int min = INT_MAX;
    int max = INT_MIN;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val < min)
        {
            min = tmp->val;
        }
        if (tmp->val > max)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << max << " " << min << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }
    print_MIN_MAX(head);
    return 0;
}

```

### 2 same to same 

```
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

void insert_tail(Node *&head, Node *&tail, int val)
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

int print_linkedList(Node *head1, Node *head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    int flag = 1;
    int count1 = 0, count2 = 0;
    while (tmp1 != NULL)
    {
        count1 += 1;
        tmp1 = tmp1->next;
    }
    while (tmp2 != NULL)
    {
        count2 += 1;
        tmp2 = tmp2->next;
    }

    if (count1 != count2)
    {
        return 0;
    }
    tmp1 = head1;
    tmp2 = head2;
    while (tmp1 != NULL)
    {

        if (tmp1->val != tmp2->val)
        {
            return 0;
        }

        tmp2 = tmp2->next;
        tmp1 = tmp1->next;
    }
    return 1;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
        {
            break;
        }
        insert_tail(head1, tail1, val1);
    }
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        insert_tail(head2, tail2, val2);
    }
    int f = print_linkedList(head1, head2);
    if (f)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
```
### 3 Get Me Mid

```
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

void insert_tail(Node *&head, Node *&tail, int val)
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

void print_mid(Node *head)
{
    vector<int> arr;
    Node *tmp = head;
    while (tmp != NULL)
    {
        arr.push_back(tmp->val);
        tmp = tmp->next;
    }
    sort(arr.begin(), arr.end());
    if (arr.size() % 2 == 0)
    {
        cout << arr[arr.size() / 2] << " " << arr[arr.size() / 2 - 1] << endl;
    }
    else
    {
        cout << arr[arr.size() / 2] << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }
    print_mid(head);
    return 0;
}
```

### 4 Reverse and Original

```
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

void insert_tail(Node *&head, Node *&tail, int val)
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

void print_orginal(Node *head)
{

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void print_reverse(Node *head)
{
    if(head==NULL){
        return;
    }
    print_reverse(head->next);
    cout<<head->val<<" ";
    
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }
    print_reverse(head);
    cout << endl;
    print_orginal(head);
    return 0;
}
```

### 5 Queries

```
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

void insert_in_linkedList(Node *&head, Node *&tail, int x, int y)
{
    Node *newNode = new Node(y);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        cout << head->val << " " << tail->val << endl;
        return;
    }
    if (x == 0)
    {
        head->next = newNode;
        head = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
    cout << head->val << " " << tail->val << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        insert_in_linkedList(head, tail, x, y);
    }
    return 0;
}
```