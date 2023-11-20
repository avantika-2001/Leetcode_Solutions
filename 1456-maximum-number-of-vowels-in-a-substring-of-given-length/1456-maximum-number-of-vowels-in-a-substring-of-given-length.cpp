class Solution {
public:
    bool Vowels(char c){
        int cnt=0;
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int n=s.length();
        int cnt=0,mx=0;
        for(int i=0;i<k;i++){
            if(Vowels(s[i])){
                cnt++;
            }
        }
        mx=cnt;
        for(int i=k;i<n;i++){
            if(Vowels(s[i]))
                cnt++;
            if(Vowels(s[i-k]))
                cnt--;
            mx=max(mx,cnt);
        }
        return mx;
    }
};