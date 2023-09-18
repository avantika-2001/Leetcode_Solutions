class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum=0,ans=0;
        mp[sum] = 1;
        for(auto it:nums){
            sum += it;
            int t = sum - k;
            if(mp.find(t) != mp.end()){
                ans += mp[t];
            }
            mp[sum]++;
        }
        return ans;
    }
};