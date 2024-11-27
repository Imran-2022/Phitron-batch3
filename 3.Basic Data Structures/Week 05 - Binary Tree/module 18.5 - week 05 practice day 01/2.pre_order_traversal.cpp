// - [Preorder Binary Tree - Coding Ninjas](https://www.codingninjas.com/studio/problems/preorder-binary-tree_5948)

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void pre(TreeNode<int> * root, vector<int> &ans){
    if(root==NULL)return;
    ans.push_back(root->data);
    pre(root->left,ans);
    pre(root->right,ans);
}

vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
    vector<int>ans;
    pre(root,ans);
    return ans;
}
