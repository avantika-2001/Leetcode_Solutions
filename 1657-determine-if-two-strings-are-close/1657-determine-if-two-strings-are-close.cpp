class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        if(n!=m)
            return false;
        unordered_map<char,int>mp1;
        for(auto it:word1)
            mp1[it]++;
        unordered_map<char,int>mp2;
        for(auto it:word2)
            mp2[it]++;
        if(mp1.size()!=mp2.size())
            return false;
        for(int i=0;i<n;i++)
        {
            if(mp1.count(word2[i])==0 || mp2.count(word1[i])==0)
                return false;
        }
        vector<int>v1;
        vector<int>v2;        
        for(auto it:mp1){
            v1.push_back(it.second);   
        }
        for(auto it:mp2){
            v2.push_back(it.second);   
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());        
        return v1==v2;           
    }
};