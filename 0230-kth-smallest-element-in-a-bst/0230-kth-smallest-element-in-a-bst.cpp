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
    typedef TreeNode t;
    int func(TreeNode* root, int k){
        priority_queue<int,vector<int>,greater<int>>pq;
        queue<t*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                t* f=q.front();
                q.pop();
                pq.push(f->val);
                if(f->left)
                    q.push(f->left);
                if(f->right)
                    q.push(f->right);
            }
        }
        while(!pq.empty() && k>1){
            pq.pop();
            k--;
        }
        return pq.top();        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        if(!root)
            return 0;
        return func(root,k);        
    }
};