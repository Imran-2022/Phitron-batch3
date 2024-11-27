//- [Count Leaf Nodes - Coding Ninjas](https://www.codingninjas.com/studio/problems/count-leaf-nodes_893055)

/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/

int noOfLeafNodes(BinaryTreeNode<int> *root) {
    if (root == NULL)
        return 0;

    // If the current node is a leaf node, return 1
    if (root->left == NULL && root->right == NULL)
        return 1;

    // Recursive calls to count leaf nodes in left and right subtrees
    int leftCount = noOfLeafNodes(root->left);
    int rightCount = noOfLeafNodes(root->right);

    // Return the total count by summing up the counts from both subtrees
    return leftCount + rightCount;
}
