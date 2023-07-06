### [problem set ](https://docs.google.com/document/d/1mBcJk-IiPl5-JJ4dgLrXmDX4XIlVEWsswNJulcwPcfk/edit)

### 1 [876. Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/)
```
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int size(ListNode*head){
        int count=0;
        ListNode*tmp=head;
        while(tmp!=NULL){
            count++;
            tmp=tmp->next;
        }
        return count;
    }

    ListNode* middleNode(ListNode* head) {
        int sz=size(head);
        ListNode*tmp=head;
        for(int i=1;i<=sz/2;i++){
            tmp=tmp->next;
        }
        return tmp;
    }
};

```

### 2 [141. Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)
```
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        bool flag = false;

        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
            {
                flag = true;
                break;
            }
           
        }
        return flag;
    }
};
```
### 3 [83. Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)
```

```
### 4 [234. Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)
```

```
### 5 []()
```

```
### 6 [237. Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/description/)
```
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* tmp=node;
        tmp->val=tmp->next->val;
        ListNode* deletable=tmp->next;
        tmp->next=tmp->next->next;
        delete deletable;
    }
};
```
