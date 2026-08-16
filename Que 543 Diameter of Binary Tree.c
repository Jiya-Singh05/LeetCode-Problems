// Given the root of a binary tree, return the length of the diameter of the tree.

// The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

// The length of a path between two nodes is represented by the number of edges between them.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int d=0;
int max(int a,int b) { 
    return (a>b)?a:b;
}
int deep(struct TreeNode* node){
    if(node==NULL) return 0;
    int l=deep(node->left),r=deep(node->right);
    d=max(d,l+r);
    return 1+max(l,r);
}
int diameterOfBinaryTree(struct TreeNode* root){
    d=0;
    deep(root);
    return d;
}
