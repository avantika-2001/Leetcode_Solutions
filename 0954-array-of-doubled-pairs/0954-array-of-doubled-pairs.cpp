class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int,int> mp;
        sort(arr.begin(),arr.end());
        for (auto it:arr)
        {
            mp[it]++;
        }
        for (int i=0; i<arr.size(); i++){
            if (mp[arr[i]]==0)continue;
            if (mp[arr[i]*2]>0){
                mp[arr[i]*2]--;
                mp[arr[i]]--;
            }
        }
        for (auto it: mp){
            if(it.second)
            {
                return false;
            }
        }
        return true;
    }
};