class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum<target)
            return 0;
        int len=INT_MAX,s=0;
        int i=0;
        for(int j=0;j<nums.size();j++){
            s+=nums[j];
            while(s>=target){
                len=min(len,j-i+1);
                s-=nums[i];
                i++;
            }
        }
        return len;
    }
};