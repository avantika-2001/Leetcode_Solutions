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
    vector<int>v;
    void findNode(TreeNode* root, int f){
        if(!root)
            return;
        findNode(root->left,1);
        if(!root->left && !root->right && f==1)
            v.push_back(root->val);
        findNode(root->right,0);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        findNode(root->left,1);
        findNode(root->right,0);
        int sum=0;
        sum=accumulate(v.begin(),v.end(),0);
        return sum;
    }
};