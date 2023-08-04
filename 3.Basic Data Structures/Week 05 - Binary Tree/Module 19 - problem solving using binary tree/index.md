### [problem set](https://docs.google.com/document/d/1UjqSc79POHOPFPt3Xwzpbgi0J4C1IGl0qY1qzJrFGwM/edit)

```
Is Node Present? - Coding Ninjas 
-

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    if(root==NULL)return false;
    if(root->data==x) return true;
    bool l=isNodePresent(root->left,x);
    bool r=isNodePresent(root->right,x);
    return (l||r);
}
-

Node Level - Coding Ninjas 
Left View Of a Binary Tree - Coding Ninjas 
Diameter Of Binary Tree - Coding Ninjas 
Special Binary Tree. - Coding Ninjas 
Reverse Level Order Traversal - Coding Ninjas

```
