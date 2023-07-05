class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int max_cnt=0;
        int i=0,f=0;
        for(int j=0;j<n;j++){
            if(nums[j]==0){
                f++;
            }
            while(f>1){
                if(nums[i]==0){
                    f--;
                }
                i++;
            }   
            max_cnt=max(max_cnt,j-i);
        }
        return max_cnt;
    }
};