// Given the root of a binary search tree, return a balanced binary search tree with the same node values. If there is more than one answer, return any of them.

// A binary search tree is balanced if the depth of the two subtrees of every node never differs by more than 1.

 /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void inorder(struct TreeNode* root,int* arr,int* index){
    if(root==NULL)return;
    inorder(root->left,arr,index);
    arr[(*index)++]=root->val;
    inorder(root->right,arr,index);
}
struct TreeNode* build(int* arr,int left,int right){
    if(left>right)return NULL;
    int mid=left+(right-left)/2;
    struct TreeNode* root=malloc(sizeof(struct TreeNode));
    root->val=arr[mid];
    root->left=build(arr,left,mid-1);
    root->right=build(arr,mid+1,right);
    return root;
}
struct TreeNode* balanceBST(struct TreeNode* root){
    int arr[10000],index=0;
    inorder(root,arr,&index);
    return build(arr,0,index-1);
}
