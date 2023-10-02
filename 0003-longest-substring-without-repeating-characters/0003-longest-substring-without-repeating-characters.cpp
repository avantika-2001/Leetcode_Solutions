class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int i=0,j=0,max_len=0;
        // vector<char> v;
        unordered_map<char,int>mp;
        while(i<n)
        {
            if(mp[s[i]]==0){
                mp[s[i]]++;
                max_len=max(max_len,i-j+1);
                i++;
            }
            else{
                mp[s[j]]--;
                j++;
            }
        }
        return max_len;
    }
};