class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n));
        int k=1;
        for(int i=0;i<(n+1)/2;i++)
        {
            for(int j=i;j<n-i;j++)
            {
                matrix[i][j]=k++;
            }
            for(int j=i+1;j<n-i;j++)
            {
                matrix[j][n-i-1]=k++;
            }
            for(int j=n-i-2;j>=i;j--)
            {
                matrix[n-i-1][j]=k++;
            }
            for(int j=n-i-2;j>i;j--)
            {
                matrix[j][i]=k++;
            }
        }
        return matrix;
    }
};