// Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return the root node reference (possibly updated) of the BST.

// Basically, the deletion can be divided into two stages:

// Search for a node to remove.
// If the node is found, delete the node.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* deleteNode(struct TreeNode* root,int key){
    if(root==NULL)return NULL;
    if(key<root->val)root->left=deleteNode(root->left,key);
    else if(key>root->val)root->right=deleteNode(root->right,key);
    else{
        if(root->left==NULL)return root->right;
        if(root->right==NULL)return root->left;
        struct TreeNode* temp=root->right;
        while(temp->left!=NULL)temp=temp->left;
        root->val=temp->val;
        root->right=deleteNode(root->right,temp->val);
    }
    return root;
}
