class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum=0;
        int rsum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            rsum+=nums[i];
        }
        for(int i=0;i<n;i++){
            rsum-=nums[i];
            if(rsum==lsum){
                return i;
            }
            lsum+=nums[i];
        }
        return -1;
    }
};