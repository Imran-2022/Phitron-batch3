// - [Node Level - Coding Ninjas](https://www.codingninjas.com/studio/problems/node-level_920383)

#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue<pair<TreeNode<int>*,int>>q;
    q.push({root,1});

    while(!q.empty()){
        pair<TreeNode<int>*,int> pr=q.front();
        TreeNode<int>* node = pr.first;
        int level=pr.second;
        q.pop();

        if(node->val==searchedValue){
            return level;
        }
        if(node->left){
            q.push({node->left,level+1});
        }
        if(node->right){
            q.push({node->right,level+1});
        }

    }
}
