class Solution {
public:
    bool check(long long target, vector<int>& nums){
        if(nums[0]>target) return false; 
        long long prev=nums[0];
        for(int i=1;i<nums.size();++i){
            long long diff=target-prev; 
            prev=nums[i]-diff; 
            if(prev>target) return false; 
        }
        return true; 
    }

    int minimizeArrayValue(vector<int>& nums) {
        long long left=0, right=*max_element(nums.begin(),nums.end()); 
        while(left<right){ 
            int mid=left+(right-left)/2; 
            if(check(mid,nums)) right=mid; 
            else left=mid+1; 
        }
        return right;
    }
};