// You are given the root node of a binary search tree (BST) and a value to insert into the tree. Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.

// Notice that there may exist multiple valid ways for the insertion, as long as the tree remains a BST after insertion. You can return any of them.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
        if(root==NULL){
            struct TreeNode* new=malloc(sizeof(struct TreeNode));
            new->val=val;
            new->right=NULL;
            new->left=NULL;
            return new;
        }
        if(root->val<val)root->right=insertIntoBST(root->right,val);
        if(root->val>val)root->left=insertIntoBST(root->left,val);
    return root;
}
