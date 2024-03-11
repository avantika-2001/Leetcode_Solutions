class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lsp=prices[0],ans=INT_MIN,profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<lsp){
                lsp=min(lsp,prices[i]);
            }
            profit=prices[i]-lsp;
            ans=max(ans,profit);
        }
        return ans;
    }
};