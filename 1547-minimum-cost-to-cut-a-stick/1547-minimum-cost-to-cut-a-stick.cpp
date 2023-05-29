class Solution {
public:
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(), cuts.end());
        int m = cuts.size();
        vector<vector<int>> dp(m, vector<int>(m));
        for(int i=2; i<m; i++) {
            for(int start=0, end=i;end<m;start++,end++) {
                dp[start][end] =INT_MAX;
                for(int mid=start+1;mid<end;mid++) {
                    dp[start][end]=min(dp[start][end],dp[start][mid]+dp[mid][end]+cuts[end]-cuts[start]);
                }
            }
        }
        return dp[0][m-1]; 
    }
};