class Solution {
public:
    vector<long long>dp;
    long long calcPts(vector<vector<int>>& q, int i){
        if(i>=q.size())
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        long long pts=0;
        pts=max(q[i][0]+calcPts(q,i+q[i][1]+1),calcPts(q,i+1));
        dp[i]=pts;
        return pts;
    }
    long long mostPoints(vector<vector<int>>& q) {
        //max(q[i][0]+q[i+q[i][1]+1][0],q[i+1][0]+q[i+1+q[i+1+q[i+1][1]+1]][0])
        int n=q.size();
        dp.resize(n,-1);
        return calcPts(q,0);
    }
};