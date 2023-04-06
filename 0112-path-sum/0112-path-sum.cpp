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
    bool isSumEqual(TreeNode* root, int targetSum)
    {
        if(root==NULL)
            return false;
        else if(!root->left && !root->right && root->val==targetSum)
            return true;
        else
            return (isSumEqual(root->left,targetSum-root->val) || isSumEqual(root->right,targetSum- root->val));
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return isSumEqual(root,targetSum);
    }
};