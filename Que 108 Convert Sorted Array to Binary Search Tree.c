/**
Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.


 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* bst(int *nums, int f, int l){
    int mid=(f+l)/2;
    if(f>l) return NULL;
    struct TreeNode*root=malloc(sizeof(struct TreeNode));
    root->val=nums[mid];root->left=bst(nums,f,mid-1);root->right=bst(nums,mid+1,l);
    return root;
}
struct TreeNode* sortedArrayToBST(int* nums, int size) {
    if (size<=0) return NULL;
    else
    return bst(nums,0,size-1);
}
