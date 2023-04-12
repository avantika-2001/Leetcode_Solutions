/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* root){
        if(!root)
            return 0;
        int l=dfs(root->left);
        int r=dfs(root->right);
        if(abs(l-r)>1) return 0;
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        if(dfs(root)==0)
            return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};