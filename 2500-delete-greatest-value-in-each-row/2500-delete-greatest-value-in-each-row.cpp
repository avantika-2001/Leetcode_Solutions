class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int n=grid.size();
        int max_val=0,sum=0;
        for(int i=0;i<n;i++){
            sort(grid[i].begin(),grid[i].end());
        }
        for(int i=0;i<grid[0].size();i++){
            max_val=0;
            for(int j=0;j<n;j++){
                max_val=max(grid[j][i],max_val);
            }
            sum+=max_val;
        }
        return sum;
    }
};