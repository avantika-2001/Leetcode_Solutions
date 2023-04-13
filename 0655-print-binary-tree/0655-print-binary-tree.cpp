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

    int height(TreeNode* root){
        if(root==NULL)return 0;
        else if(root->left or root->right){
            return 1+max(height(root->left),height(root->right));
        }
        return 0;
    }
    int row;
    void dfs(TreeNode* root,vector<vector<string>> &v,int i,int j)
    {
        if(root==NULL)return;
        dfs(root->left,v,i+1,j-pow(2,row-i-1));
        if(i>=0 and i<v.size() and j>=0 and j<v[0].size())         
        {
            v[i][j]=to_string(root->val);
        }
        dfs(root->right,v,i+1,j+pow(2,row-i-1));        
    }

    vector<vector<string>> printTree(TreeNode* root) 
    {
        row=height(root);
        int col=pow(2,row+1)-1;
        vector<vector<string>>v(row+1,vector<string>(col));
        v[0][(col/2)]=to_string(root->val);
        dfs(root,v,0,(col/2));
        return v;   
    }
};