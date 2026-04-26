// Given the root of a binary tree, return the inorder traversal of its nodes' values.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int s=0;
void inorder(struct TreeNode* root, int* arr)
{
    if(root==NULL) return;
    inorder(root->left,arr);
    arr[s++]=root->val;
    inorder(root->right,arr);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
    int* arr=(int*)malloc(100*sizeof(int)); 
    s=0;
    inorder(root,arr);
    *returnSize=s;
    return arr;
}
