class Solution {
public:
    int partitionString(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        int cnt=1;
        int i=0;
        while(i<n){
            if(mp[s[i]]==0){
                mp[s[i]]++;
                i++;
            }
            else{
                cnt++;
                mp.clear();
            }
        }
        return cnt;
    }
};