class Solution {
public:

    bool isPalindrome(string s) 
    {
        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z'){
                str+=s[i]+32;
            }
            else if ((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                str+=s[i];
            }
        }
        int n=str.length();
        // if(n==1) return false;
        for(int i=0;i<n/2;i++){
            if(str[i]!=str[n-1-i]){
                return false;
            }
        }
        return true;
    }
};