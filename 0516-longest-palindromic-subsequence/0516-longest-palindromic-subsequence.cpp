class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string r=s;
        reverse(s.begin(),s.end());
        int n=s.length();
        int m=r.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1]==r[j-1])
                    dp[i][j]=dp[i-1][j-1]+1;
                else 
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
};