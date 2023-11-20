class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0, max_sum=INT_MIN;
        int n=nums.size();
        if(n==k){
            sum=accumulate(nums.begin(),nums.end(),0);
            return (double)sum/n;
        }
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        max_sum=sum;
        int i=0,j=k;
        while(j<n){
            sum+=nums[j]-nums[i];
            i++;
            j++;
            max_sum=max(max_sum,sum);
        }
        return (double)max_sum/k;
    }
};