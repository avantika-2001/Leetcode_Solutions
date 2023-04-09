class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        long long cnt=0;
        int n=nums.size();
        vector<int>pref(n+1,0);
        for(int i=0;i<n;i++){
            pref[i+1]=pref[i]^nums[i];
        }
        unordered_map<long long, long long>mp;
        mp[0]=1;
        for(int i=1;i<=n;i++){
            if(mp[pref[i]])
                cnt+=mp[pref[i]];
            mp[pref[i]]++;
        }
        return cnt;
    }
};