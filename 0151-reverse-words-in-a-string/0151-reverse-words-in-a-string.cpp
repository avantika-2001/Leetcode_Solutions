class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string r="";
        vector<string>res;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                r+=s[i];
            }
            if(s[i]==' ' && r!=""){
                res.push_back(r);
                r="";
            }
        }
        if(r!="")
            res.push_back(r);
        r="";
        reverse(res.begin(),res.end());
        for(int i=0;i<res.size();i++){
            r+=res[i]+" ";
        }
        r.pop_back();
        return r;
    }
};