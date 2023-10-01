class Solution {
public:
    /*int check4(string s){
        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]!='.' && (s[i]>='0' && s[i]<='9'){
                str+=s[i];
            }
        }
    }
    int check6(string s){
        
    }
    string validIPAddress(string queryIP) {
        int n=queryIP.length();
        int flag=0;
        if(n>=7 && n<=15){
            flag=check4(string queryIP);
            if(flag)
                return "IPv4";
        }
        else if(n>=15 && n<=39){
            flag=check6(string queryIP);
            if(flag)
                return "IPv6";
        }
        else{
            return "Neither";
        }*/
        string validIPAddress(string queryIP) {

        regex v4("(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\\.){3}([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])");
        if(regex_match(queryIP,v4)) return "IPv4";

        regex v6("((([0-9a-fA-F]){1,4})\\:){7}([0-9a-fA-F]){1,4}");
        if(regex_match(queryIP,v6)) return "IPv6";

        return "Neither";
    }
};