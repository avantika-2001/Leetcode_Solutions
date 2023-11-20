class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0,j=0;
        int i=0;
        for(j=0;j<n;j++){
            if(nums[j]==0){
                cnt++;
            }
            if(cnt>k){
                if(nums[i]==0){
                    cnt--;
                }
                i++;
            }
        }
        return j-i;
    }
};