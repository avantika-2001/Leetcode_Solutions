class Solution {
public:
    bool isMax(int n, vector<int>& candies)
    {
        int f=0;
        for(int i=0;i<candies.size();i++)
        {
            if(n>=candies[i])
                f=1;
            else
                return false;
        }
         return true;
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>cd;
        for(int i=0;i<candies.size();i++)
        {
            if(isMax(candies[i]+extraCandies, candies))
                cd.push_back(true);
            else
                cd.push_back(false);
        }
        return cd;
    }
};