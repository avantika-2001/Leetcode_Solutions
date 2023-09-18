class Solution {
public:
typedef pair<int,int>p;
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>v;
        priority_queue<p,vector<p>,greater<p>>pq;
        int n=mat.size();
        int m=mat[0].size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=0;j<m;j++)
            {
                sum+=mat[i][j];
            }
            pq.push({sum,i});
        }
        while(!pq.empty() && k--){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};