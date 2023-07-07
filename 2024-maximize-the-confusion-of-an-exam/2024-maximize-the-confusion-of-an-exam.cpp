class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        unordered_map<char,int>mp;
        for(int i=0;i<k;i++){
            mp[answerKey[i]]++;
        }
        int i=0,maxlen=k;
        int n=answerKey.size();
        for(int j=k;j<n;j++){
            mp[answerKey[j]]++;
            while(min(mp['T'],mp['F'])>k){
                mp[answerKey[i]]--;
                i++;
            }
            maxlen=max(maxlen,j-i+1);
        }
        return maxlen;
    }
};