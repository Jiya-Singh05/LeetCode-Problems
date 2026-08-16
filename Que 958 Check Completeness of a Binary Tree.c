// Given the root of a binary tree, determine if it is a complete binary tree.

// In a complete binary tree, every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible.
//   It can have between 1 and 2h nodes inclusive at the last level h.
  /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isCompleteTree(struct TreeNode* root) {
    struct TreeNode* q[10000];
    int f=0,r=0,flag=0;

    q[r++]=root;
    while(f<r){
        struct TreeNode* x=q[f++];
        if(x==NULL) flag=1;
        else{
            if(flag) return 0;
            q[r++]=x->left;
            q[r++]=x->right;
        }
    }
    return 1;
}
