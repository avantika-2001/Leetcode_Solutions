class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        int a=*min_element(nums.begin(),nums.end());
        return a>0?1:abs(a)+1;
    }
};