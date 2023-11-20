class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans(2);
        unordered_map<int,int>mp1,mp2;
        for(auto it:nums1){
            mp1[it]++;
        }
        for(auto it:nums2){
            mp2[it]++;
        }
        for(int i=0;i<nums1.size();i++){
            if(mp2[nums1[i]]==0 && mp1[nums1[i]]>0){
                ans[0].push_back(nums1[i]);
                mp1[nums1[i]]=0;
            }
        }
        for(int i=0;i<nums2.size();i++){
            if(mp1[nums2[i]]==0 && mp2[nums2[i]]>0){
                ans[1].push_back(nums2[i]);
                mp2[nums2[i]]=0;
            }
        }
        return ans;
    }
};