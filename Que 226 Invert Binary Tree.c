//Given the root of a binary tree, invert the tree, and return its root.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* r) {
    if(r==NULL) return NULL;
    struct TreeNode* temp=r->left;
    r->left=invertTree(r->right);
    r->right=invertTree(temp);
    return r;
}
