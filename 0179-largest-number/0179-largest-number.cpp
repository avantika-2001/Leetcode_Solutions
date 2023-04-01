class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n=nums.size();
        vector<string>v;
        for(auto it:nums){
            v.push_back(to_string(it));
        }
        sort(v.begin(),v.end(),[&](auto &a, auto &b){
            return a+b>b+a;
        });
        string s="";
        for(int i=0;i<n;i++){
            s+=v[i];
        }
        while(s[0]=='0' && s.length()>1){
            s.erase(0,1);
        }
        return s;
    }
};