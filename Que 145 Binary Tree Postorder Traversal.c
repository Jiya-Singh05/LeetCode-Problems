//Given the root of a binary tree, return the postorder traversal of its nodes' values.
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
void post(struct TreeNode* root, int* arr)
{
    if(root==NULL) return;
    post(root->left,arr);
    post(root->right,arr);
    arr[s++]=root->val;
}
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* arr=(int*)malloc(100*sizeof(int)); 
    s=0;
    post(root,arr);
    *returnSize=s;
    return arr;
}
