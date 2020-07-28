/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

//DFS
int maxDepth(struct TreeNode* root){
    if(root==NULL) return 0;
    int leftMax=maxDepth(root->left);
    int rightMax=maxDepth(root->right);
    return 1+fmax(leftMax,rightMax);
}