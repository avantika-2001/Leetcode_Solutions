class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)
                    return findP(grid,i,j);
            }
        }
        return 0;
    }
    int findP(vector<vector<int>>& grid, int i, int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size())
            return 1;
        if(grid[i][j]==0)
            return 1;
        if(grid[i][j]==-1)
            return 0;
        int p=0;
        grid[i][j]=-1;
        p+=findP(grid,i-1,j);
        p+=findP(grid,i,j-1);
        p+=findP(grid,i+1,j);
        p+=findP(grid,i,j+1);
        
        return p;
    }
    
};