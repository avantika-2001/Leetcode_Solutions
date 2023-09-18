class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // double sum=0;
        double max_sum=0,sm=0;
        for(int i=0;i<k;i++){
            sm+=nums[i];
        }
        max_sum=sm;
        for(int j=k;j<nums.size();j++){
            sm+=nums[j]-nums[j-k];
            max_sum=max(max_sum,sm);
        }
        return max_sum/k;
    }
};