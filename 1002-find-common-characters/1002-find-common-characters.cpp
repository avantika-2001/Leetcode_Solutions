class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>ans;
        unordered_map<char,int>mp;
        for(int i=0;i<words[0].size();i++){
            mp[words[0][i]]++;
        }
        for(int i=1;i<words.size();i++){
            unordered_map<char,int>temp;
            for(int j=0;j<words[i].size();j++){
                if(mp[words[i][j]]>0){
                    temp[words[i][j]]++;
                    mp[words[i][j]]--;
                }
            }
            mp=temp;
        }
        for(auto i:mp){
            while(i.second){
                ans.push_back({i.first});
                i.second--;
            }
        }
    return ans;
    }
};