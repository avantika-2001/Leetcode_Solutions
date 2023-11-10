class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int mx=*max_element(candies.begin(),candies.end());
        vector<bool>res(n);
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies<mx){
                res[i]=false;
            }
            else{
                res[i]=true;
            }
        }
        return res;
    }
};