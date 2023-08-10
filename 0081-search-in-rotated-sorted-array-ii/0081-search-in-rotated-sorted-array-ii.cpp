class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int mid=0;
        while(l<=r){
            mid=(l+r)/2;
            if(nums[mid]==target){
                return true;
            }
            if((nums[l]==nums[mid]) && (nums[r]==nums[mid]))
            {
                l++;
                r--;
            }
            else if(nums[l]<=nums[mid])
            {
                if((nums[l]<=target) && (nums[mid]>target))
                    r=mid-1;
                else
                    l=mid+1;
            }
            else{
                if((nums[mid]<target) && (nums[r]>=target))
                    l=mid+1;
                else
                    r=mid-1;
            }
        }
        return false;
    }
};