/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* cur,int& max_yes,int& max_no){
        if(!cur){
            max_yes=0;
            max_no=0;
            return;
        }
        int left_yes,left_no,right_yes,right_no;
        dfs(cur->left,left_yes,left_no);
        dfs(cur->right,right_yes,right_no);
        max_yes=max(0,left_no)+max(0,right_no)+cur->val;
        max_no=max(0,max(left_no,left_yes)+max(right_yes,right_no));
        return;
    }
    int rob(TreeNode* root) {
        int ans_yes,ans_no;
        dfs(root,ans_yes,ans_no);
        return max(ans_yes,ans_no);
    }
};