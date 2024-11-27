//- [Level Order Traversal - Coding Ninjas](https://www.codingninjas.com/studio/problems/level-order-traversal_796002)

#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };



************************************************************/
void levelOrder(BinaryTreeNode<int>*root,vector<int>&vt){
    if(root==NULL)return;
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    while(!q.empty()){
        BinaryTreeNode<int>* curr=q.front();
        q.pop();
        vt.push_back(curr->val);
        if(curr->left !=NULL)q.push(curr->left);
        if(curr->right !=NULL)q.push(curr->right);
    }
}

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    vector<int>ans;
    levelOrder(root,ans);
    return ans;
}










