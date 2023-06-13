class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>mp;
        int n=grid.size();
        int cnt=0;
        vector<int>v;
        for(int i=0;i<n;i++){ 
            v=grid[i];
            // mp.first=v;
            mp[v]++;
        }
        for(int i=0;i<n;i++){
            v.clear();
            for(int j=0;j<n;j++){
                v.push_back(grid[j][i]);
            }
            if(mp.find(v)!=mp.end()){
                cnt+=mp[v];
            }
        }
        return cnt;
    }
};