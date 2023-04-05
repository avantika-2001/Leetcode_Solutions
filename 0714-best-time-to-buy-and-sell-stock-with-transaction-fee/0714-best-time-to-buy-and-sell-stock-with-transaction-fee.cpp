class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int sum = 0,min = INT_MAX, max=0;
        for(int p:prices){
            if(p<max-fee) {
                sum += max - min - fee;
                max = 0;
                min = p;
            }
            if(min>p) {
                min = p;
            }
            if(p>min+fee && p>max) {
                max = p;
            }
        }
        if(max-min>fee) {
            sum += max-min-fee;
        }
        return sum;
    }
};